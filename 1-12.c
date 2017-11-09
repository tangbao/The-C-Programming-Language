/*
 *
 *
 * 1-12.c
 *
 *
 * print the input, one word in every line.
 *
 *
 * tangbao 2015.12.03
 *
 *
 */

#include<stdio.h>
#define IN 1
#define OUT 0

int main()
{
	int c,state;
	state = OUT;

	while((c = getchar()) != EOF)
	{
		if (c == '\n' || c == ' ' || c == '\t')
		{
			if (state == IN)
			{
				putchar('\n');
				state = OUT;
			}
		}
		else if (state == OUT)
		{
			state = IN;
			putchar(c);
		}
		else putchar(c);
	}
	return 0;
}	
