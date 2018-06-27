#include <stdio.h>
#include "stdafx.h"
int func(unsigned);

int main()
{
	unsigned val = 0x000AA151;
	int bits;
	bits = func(val);
	if (bits == -1)
		printf("Error");
	printf("%d\n", bits);
	printf("%08x\n", val);
	unsigned mask = 0x80000000 >> bits;
	val = val ^ mask;
	printf("%08x\n", val);
	getchar();
	return 0;
}
int func(unsigned num)
{
	unsigned mask = 0x80000000;
	unsigned result;
	int i;
	for (i = 0; i < 32; i++)
	{
		result = num & mask;
		if (result != 0)
			break;
		mask = mask >> 1;
	}

	return i;
}