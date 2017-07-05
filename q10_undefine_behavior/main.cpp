#include <stdio.h>

int changeNum(int *n) {
	++*n;
	return*n;
}

int main(int argc, char **argv) {
	int n = 0;
	printf("%d %d %d\n", changeNum(&n), changeNum(&n), changeNum(&n));
	return 0;
}
