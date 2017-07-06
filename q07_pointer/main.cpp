#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

int *makeArray(int size)
{
	int *array = (int *)malloc(size);
	for (int i = 0; i < size; i++){
		array[i] = i;
	}
	return array;
}

void printArray(int *array, int size)
{
	for (int i = 0; i < size; i++){
		printf(" %d", array[i]);
	}
	putchar('\n');
}

int main()
{
	const int SIZE = 5;
	int *array = makeArray(SIZE);
	printArray(array, SIZE);
	for (int i =0; i < SIZE; i++){
		assert(array[i] == i);
	}

	int *copy = array;
	assert(memcmp(array,copy, SIZE*sizeof(array[0])) == 0);
	printf("Both *array and *copy have the same data\n");

	free(array);
	//free(copy);
	return 0;
}
