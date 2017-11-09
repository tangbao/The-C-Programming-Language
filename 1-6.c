/*
 *
 * 1-6
 *
 * Find out the value of getchar() != EOF.
 *
 * tangbao 2015.12.01 
 * 
 *
 */

#include<stdio.h>
int main()
{
	int c;
	while(c = getchar() != EOF)
		printf("%d\n", c);

	// c = getchar() != EOF equals c = (getchar() != EOF)
	//when getchar() != EOF, c=1; else c=0 and the programme will end.
	
	printf("%d - at EOF\n", c);
	return 0;

