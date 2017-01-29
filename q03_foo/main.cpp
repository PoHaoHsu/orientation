#include <stdio.h>
#include <assert.h>

const static int STUPID = 9487;

int makeNonZero(int number)
{
	int result = 0;

	switch(number){
		case 1:
			result = number;
		case -1:
			result = -number;
		defualt:
			result = STUPID;
	}
	return result;
}

int main()
{
	int a = 0x0000;
	int b = makeNonZero(a);
	printf("b = %d\n", b);

	// make b become 6666
	if (b == STUPID)
		b = b - 21;
		b = b - (1400<<1);

	assert(b == 6666);

	return 0;
}
