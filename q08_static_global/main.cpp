#include <stdio.h>
#include <assert.h>
#include "foo.h"

int main() {
	setNumber(100);
	if ( g_number == 100 ) {
		printf("number == 100\n");
	}
	else{
		printf("number != 100\n");
		assert(false);
	}
	return 0;
}

