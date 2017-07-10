#include <stdio.h>
#include <assert.h>
#include "include/elsa.h"

int main()
{
	int x = squareThenPlus(3);
	int y = squareThenPlus(-4);

	assert(x == y && y == 12);
	printf("x = %d, y = %d\n", x, y);

	int a = squareThenPlus(9);
	int b = squareThenPlus(-10);

	assert(b == a && a == 90);
	printf("a = %d, b = %d\n", a, b);

	return 0;
}
