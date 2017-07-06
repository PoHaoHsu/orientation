#include "../include/foo.h"
#include "stdio.h"

int g_number = 0;

void setNumber(int x)
{
	//printf("g_number = %d\n", g_number);
	g_number = x;
	//printf("g_number = %d\n", g_number);
}
