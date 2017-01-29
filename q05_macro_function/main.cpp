#include <stdio.h>
#include <assert.h>

void foo()
{
        char *Q = "What do computers and air conditioners have in common?";
        char *A = "They both become useless when you open windows";
        // Linux is the BEST !!!
}

int main()
{
	int i = -3;
	int j = 4;
	int result = SQUARE(i + j);
	assert(result == 1);
	printf("%d\n", result);

	const int FIVE = 5;
	const int NINE = 9;
	int a = FIVE;
	int b = NINE;

	printf("a = %d, b = %d\n", a, b);
	SWAP(a,b);
	SWAP(a,a);
	SWAP(a,b);
	SWAP(b,b);
	SWAP(a,b);
	assert(b == FIVE && a == NINE);
	printf("a = %d, b = %d\n", a, b);
	return 0;
}

