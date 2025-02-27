#include <stddef.h>
#include <stdio.h>
#include "assertions.h"

FILE *assertionOutput;

FILE *debugAssertionOutput;

#ifndef DISABLE_ASSERTIONS
	void printAssertionFailure(char *file, size_t lineNumber, char *expression) {
		fprintf(assertionOutput, "[%s:%zu] Assertion failed: '%s'.\n", file, lineNumber, expression);
	}
#endif

#ifndef DISABLE_DEBUG_ASSERTIONS
	void printDebugAssertionFailure(char *file, size_t lineNumber, char *expression) {
		fprintf(debugAssertionOutput, "[%s:%zu] Debug assertion failed: '%s'.\n", file, lineNumber, expression);
	}
#endif
