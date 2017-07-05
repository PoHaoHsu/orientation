#include <stdio.h>
#include <assert.h>

int main()
{
	const int row = 4;
	const int col = 3;
	
	// allocate memory
	char **board = new char *[row];
	for (int i = 0; i < row; i++){
		board[i] = new char [col];
	}

	// initial values in array
	for (int i = 0; i < row; i++){
		for (int j =0; j < col; j++){
			board[i][j] = i*row+j;
		}
	}

	// print
	printf("+-+-+-+\n");
	for (int i = 0; i < row; i++){
		for (int j =0; j < col; j++){
			printf("|%X", board[i][j]);
		}
		printf("|\n");
		printf("+-+-+-+\n");
	}

	// Remember to free memory allocation!!
	for (int i = 0; i < row ; i++){
		delete[] board[i];
	}
	delete[] board;
	return 0;
}
