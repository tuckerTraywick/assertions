#include <stdio.h>
#include "assertions.h"
#include "foo.h"

void handleFailedAssertion(void) {
	printf("my handler\n");
}

void handleFailedDebugAssertion(void) {
	printf("my debug handler\n");
}

int main(void) {
	assertionOutput = stderr;
	debugAssertionOutput = stderr;
	assert(1 == 2);
	foo();
	return 0;
}
