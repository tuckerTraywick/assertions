#include <stdio.h>
#include "foo.h"
#include "assertions.h"

void callHandler(void) {
	printf("calling the handler\n");
	handleFailedAssertion();
}
