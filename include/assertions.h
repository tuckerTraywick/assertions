#ifndef ASSERTIONS_H
#define ASSERTIONS_H

#include <stddef.h>
#include <stdlib.h>

#define assert(expression, ...) if (expression) {} else {printAssertionFailure(__FILE__, __LINE__, #expression); handleFailedAssertion();}

void printAssertionFailure(char *file, size_t lineNumber, char *expression);

void handleFailedAssertion(void);

#endif // ASSERTIONS_H
