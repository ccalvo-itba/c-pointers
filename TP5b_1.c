#include <stdio.h>

int main(void)
{
	char a = 'h';
	void *p;
	p = &a;
	printf("a: % c\n", *p);
	return 0;
}