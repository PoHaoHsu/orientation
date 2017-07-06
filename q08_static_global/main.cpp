#include <stdio.h>
#include <assert.h>
#include "include/foo.h"

int main() {
	
	//printf("g_number = %d\n", g_number);
	setNumber(100);
	//printf("g_number = %d\n", g_number);
	if ( g_number == 100 ) {
		printf("number == 100\n");
	}
	else{
		printf("number != 100\n");
		assert(false);
	}
	return 0;
}

