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

#undef __GG__
#ifdef __GG__
programmer (noun.)
A person who fixed a problem that you do not know you have,
in a way that you do not understand
#endif

	return 0;
}
