#include <stdio.h>
#include <assert.h>

#define SQUARE(x) (x * x)
#define SWAP(x,y) x^=y^=x^=y

int main()
{
	int i = -3;
	int j = 4;
	int result = SQUARE((i + j));
	//printf("%d\n", result);
	assert(result == 1);
	printf("%d\n", result);

	const int FIVE = 5;
	const int NINE = 9;
	int a = FIVE;
	int b = NINE;

	printf("a = %d, b = %d\n", a, b);
	SWAP(a,b);
	printf("swap(a,b) a = %d, b = %d\n", a, b);
	//SWAP(a,a);
	//printf("swap(a,a) a = %d, b = %d\n", a, b);
	SWAP(a,b);
	printf("swap(a,b) a = %d, b = %d\n", a, b);
	//SWAP(b,b);
	//printf("swap(b,b) a = %d, b = %d\n", a, b);
	SWAP(a,b);
	assert(b == FIVE && a == NINE);
	printf("a = %d, b = %d\n", a, b);
	return 0;
}

