#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

void printNumbers(int *array, int size)
{
	for(int i = 0; i < size; i++){
		printf(" %d", array[i]);
	}
	putchar('\n');
}

int cmp(const void *obj1, const void *obj2)
{
	return *(int *)obj1 - *(int *)obj2;
}

int main()
{

#if 0
Algorithm (noun.)
Word used by programmers when ...
they do not want to explain what they did
#endif

	return 0;
}
