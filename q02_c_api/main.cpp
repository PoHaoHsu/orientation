#include <stdio.h>
#include <assert.h>
#include <string.h>

int splitBySpace(char *text)
{
	const char *token = " ";
	int index = 0;
	char *position = strtok(text, token);
	while( position != NULL){
		printf("#%d: %s\n", index, position);
		position = strtok(NULL, token);
		index++;
	}
	return index;
}

void printWholeFile(char const *filename)
{
	FILE *fp = fopen(filename, "r");
	assert(fp != NULL);
	while(fp){
		char c = fgetc(fp);
		if (c == EOF) {
			fclose(fp);
			break;
		}
		putchar(c);
	}
	putchar('\n');
}

int main()
{

	char *someText = "Can you can a can as a canner ?";

	splitBySpace(someText);

	printf("Do it again!\n");
	splitBySpace(someText);

	// read this file's content and print out
	// you should enter "mian.cpp" in console manually
	char filename[21];
	printf("input the source code file name: ");
	fgets(filename, 20, stdin);
	assert(strncmp(filename, "main.cpp", 8) == 0);
	printWholeFile(filename);

	return 0;
}
