#ifndef ASSERTIONS_H
#define ASSERTIONS_H

#include <stddef.h>
#include <stdio.h>

// Define this flag by passing it to your compiler.
#ifdef DISABLE_ASSERTIONS
	#define assert(expression)
#else
	#define assert(expression) if (expression) {} else {printAssertionFailure(__FILE__, __LINE__, #expression); handleFailedAssertion();}
#endif

// Define this flag by passing it to your compiler.
#ifdef DISABLE_DEBUG_ASSERTIONS
	#define debugAssert(expression)
#else
	#define debugAssert(expression) if (expression) {} else {printDebugAssertionFailure(__FILE__, __LINE__, #expression); handleFailedDebugAssertion();}
#endif

extern FILE *assertionOutput;

extern FILE *debugAssertionOutput;

void printAssertionFailure(char *file, size_t lineNumber, char *expression);

void printDebugAssertionFailure(char *file, size_t lineNumber, char *expression);

// These functions need to be defined by the user if used.
void handleFailedAssertion(void);

void handleFailedDebugAssertion(void);

#endif // ASSERTIONS_H
