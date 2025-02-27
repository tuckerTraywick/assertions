#include <stdlib.h>
#include <stdio.h>
#include "assertions.h"
#include "foo.h"

void handleFailedAssertion(void) {
	printf("my hanlder\n");
}

int main(void) {
	callHandler();
	return 0;
}
