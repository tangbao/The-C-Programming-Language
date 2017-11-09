/*
 *
 * 1-9.c
 *
 * replace string of blanks with a single blank
 *
 *
 * tangbao 2015.12.02
 *
 *
 */


#include<stdio.h>
int main()
{
	int c;
	int blank=0;

	while((c=getchar()) != EOF)
	{
		if (!blank || c != ' ') putchar(c);
		if (c == ' ')
			blank++;
		else if (blank) blank = 0;
	}
	
	return 0;
}
