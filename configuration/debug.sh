#!/bin/sh
source configuration/all.sh
flags+=" -O -g3"
includes+=
libraries+=
defines+=" -D DISABLE_ASSERTIONS"
valgrindFlags+=
