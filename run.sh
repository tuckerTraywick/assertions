#!/bin/sh
# Parse the flags.
test=false
valgrind=false
configuration=""
while getopts "tvb:" option; do
	case $option in
		t)
			test=true
			;;
		v)
			valgrind=true
			;;
		b)
			configuration=$OPTARG
			;;
	esac
done

# Configure valgrind.
if [ ! -f "configuration/$configuration.sh" -o ! "$configuration" ]; then
	echo "Build must have configuration!"
	exit 1
fi
source configuration/$configuration.sh

# Build the code.
./build.sh $@

# Run the tests.
if $test; then
	echo
	echo "---- TESTING ----"
	if $valgrind; then
		valgrind $valgrindFlags binary/test
	else
		./binary/test
	fi
fi

# Run the build.
if [ -f binary/run ]; then
	echo
	echo "---- RUNNING ----"
	if $valgrind; then
		valgrind $valgrindFlags binary/run
	else
		./binary/run
	fi
fi
