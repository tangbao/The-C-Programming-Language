/*
 *
 *
 * 1-8.c
 *
 * count blanks, tabs, and newlines
 *
 * tangbao 2015.12.2
 *
 *
 */

#include <stdio.h>
int main()
{
	int c, nb, nt, nl;
	
	nb=0;
	nt=0;
	nl=0;

	while((c=getchar()) != EOF)
	{
		if (c == ' ')
			nb++;
		else if (c == '\t')
			nt++;
		else if (c == '\n')
			nl++;
	}

	printf("blank_num=%d, tabs_num=%d, newlines=%d", nb, nt, nl);
	return 0;
}
