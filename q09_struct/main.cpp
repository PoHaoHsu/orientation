#include <stdio.h>
#include <assert.h>

struct A{
	bool isGood;
	int age;
	short x;
	char tag;
	short y;
};

struct B{
	unsigned int money;
	char id;
	short a;
	bool isRich;
	short b;
};

int main()
{
	struct A a;
	struct B b;
	assert(sizeof(a) == sizeof(b));
	return 0;
}
