#include <stdio.h>
#include <stdlib.h>

//compare function
int compare(const void *arg1, const void *arg2) {
	return  (*(int *)arg1 - *(int *)arg2);
}

int main(int argc, char* argv[]){

	//get input
	int n = atoi(argv[1]);

	//set variable
	int i, j;
	int num_of_factor = n / 2;

	//dynamically allocate an array
	int *result_arr;
	result_arr = (int *)malloc(num_of_factor);

	//find all factors
	while(i * i < n){
		if(n % i == 0){
			//put the factor pair in the array
			//for example : 12 = 2 x 6
			//(2, 6) is the factor pair of 12
			result_arr[++j] = i;
			result_arr[++j] = n / ++i;
		}
	}

	//ascending sort
	qsort((void *)result_arr, j, sizeof(int), compare);

	//print the result
	for(i = 0; i < j; i++)
		printf("%d ", result_arr[i]);
	printf("\n");

	//free memory
	free(result_arr);

	return 0;
}
