#include <stdio.h>

int changeNum(int *n) {
	++*n;
	return*n;
}

int main(int argc, char **argv) {

#undef __LAST__
#ifdef __LAST__
UNIX is friendly...
It is just very particular about who its friends are
#endif

	return 0;
}
