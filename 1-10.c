/*
 *
 * 1-10.c
 *
 *
 * Replace tabs and backspace with \t,\b,\\,etc.
 *
 *
 * tangbao 2015.12.03
 *
 *
 */

#include<stdio.h>
int main()
{
	int c;
	while ((c = getchar()) != EOF)
	{
		if (c == '\t')
			printf("\\t");
		else if (c == '\b')
			printf("\\b");
		else if (c == '\\')
			printf("\\\\");
		else putchar(c);
	}
	return 0;
}
