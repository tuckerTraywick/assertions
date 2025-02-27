#include <stddef.h>
#include <stdio.h>
#include "assertions.h"

FILE *releaseAssertionOutput;

FILE *debugAssertionOutput;

#ifndef DISABLE_RELEASE_ASSERTIONS
	void printReleaseAssertionFailure(char *file, size_t lineNumber, char *expression) {
		fprintf(releaseAssertionOutput, "[%s:%zu] Release assertion failed: '%s'.\n", file, lineNumber, expression);
	}
#endif

#ifndef DISABLE_DEBUG_ASSERTIONS
	void printDebugAssertionFailure(char *file, size_t lineNumber, char *expression) {
		fprintf(debugAssertionOutput, "[%s:%zu] Debug assertion failed: '%s'.\n", file, lineNumber, expression);
	}
#endif
