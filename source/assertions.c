#include <stdlib.h>
#include <stdio.h>
#include "assertions.h"

void printAssertionFailure(char *file, size_t lineNumber, char *expression) {
	printf("[%s:%zu] Assertion failed: '%s'.\n", file, lineNumber, expression);
}
