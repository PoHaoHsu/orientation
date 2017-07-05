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
	for(char letter =0; letter < 255; letter++){
		putchar(letter);
		putchar(' ');
	}
	putchar('\n');

	int numbers[] = {100, -2147483648, 6666, 0, -8520};
	const unsigned int LENGTH = sizeof(numbers)/sizeof(numbers[0]);
	printNumbers(numbers, LENGTH);

	printf("After sorting...\n");
	qsort(numbers, LENGTH, sizeof(numbers[0]), cmp);
	printNumbers(numbers, LENGTH);

	for (unsigned int i = 1; i < LENGTH; i++){
		assert(numbers[i-1] <= numbers[i]);
	}

	const int FACTOR = 343;
	float x = 0;
	for (int i =0; i < FACTOR; i++){
		x += 13/FACTOR;
	}
	if (x == 13){
		printf("Correct, x == 13!\n");
	}
	else{
		assert(false);
	}
	return 0;
}
