#include <stdio.h>
#include "assertions.h"
#include "foo.h"

void handleFailedReleaseAssertion(void) {
	printf("my handler\n");
}

void handleFailedDebugAssertion(void) {
	printf("my debug handler\n");
}

int main(void) {
	releaseAssertionOutput = stderr;
	debugAssertionOutput = stderr;
	releaseAssert(1 == 2);
	foo();
	return 0;
}
