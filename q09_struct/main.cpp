#include <stdio.h>
#include <assert.h>

struct A{
	bool isGood;
	int age;
	short x;
	char tag;
	short y;
}__attribute__((packed));

struct B{
	unsigned int money;
	char id;
	short a;
	bool isRich;
	short b;
}__attribute__((packed));

int main()
{
	struct A a;
	struct B b;
	printf("a = %ld\n", sizeof(a));
	printf("b = %ld\n", sizeof(b));
	assert(sizeof(a) == sizeof(b));
	return 0;
}
