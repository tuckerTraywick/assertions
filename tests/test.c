#include <stdio.h>
#include "assertions.h"
#include "logging.h"
#include "foo.h"

void handleFailedReleaseAssertion(void) {
	printf("my handler\n");
}

void handleFailedDebugAssertion(void) {
	printf("my debug handler\n");
}

int main(void) {
	logErrorOutput = stderr;
	releaseAssert(1 == 2);
	foo();
	return 0;
}
