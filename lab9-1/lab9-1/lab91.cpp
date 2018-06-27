// lab91.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"
#include "stdlib.h"
int int_compare(const void*, const void*);
int char_compare(const void*, const void*);
int a[5] = { 3,2,4,5,1 };
char b[5][5] = { "aaac","aab","aaaa","ccc","bbb" };
int main()
{
	printf("%d\n", sizeof(*a));
	printf("%d\n", sizeof(*b));
	qsort(a, 5, sizeof(*a), int_compare);
	qsort(b, 5, sizeof(*b), int_compare);
	for (int i = 0; i < 5; i++)
		printf_s("%d ", a[i]);
	printf("\n");
	for (int i = 0; i < 5; i++)
		printf_s("%s  ", b[i]);

	getchar();
    return 0;
}
int int_compare(const void * a, const void *b) {
	return *(int*)a - *(int*)b;
}

int char_compare(const void * a, const void *b) {
	return strcmp((char*)a, (char*)b);
}
