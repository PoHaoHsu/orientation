#include <stdio.h>
#include <assert.h>
#include "include/magic.h"

int main()
{
	int x = doMagic(1, 'l', '1', 'I');
	int y = doMagic(2, '0', '1', '7');
	printf("x = %d\n",x);
	printf("y = %d\n",y);
	assert(x == -20170128 || y == -20170128);
	return 0;
}
