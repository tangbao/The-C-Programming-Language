/*************************************************************************
	> File Name: 1-13-2.c
	> Author: tangbao
	> Mail: i@tbis.me 
	> Created Time: 2015年12月10日 星期四 16时27分35秒
 ************************************************************************/

#include<stdio.h>

#define MAXTIME   15 //a word should appear no more than 15 times
#define MAXLENGTH 11 //a word should have at most 11 letters
#define IN		  1
#define OUT		  0

// print shizhitu
int main()
{
	int flag = OUT;
	int c, length = 0;
	int i, j, max=0;
	int num[MAXLENGTH+1] = {0};
	
	while ((c = getchar()) != EOF)
	{
		if ((c != ' ' && c != '\t' && c != '\n' ) || flag == OUT)
		{
			length ++;
			if (max < length)
				max = length;
			flag = IN;
		}
		else
		{
			flag = OUT;
			num[length] ++;
			length = 0;
		}
	}

	
	for (i = 1; i <= MAXLENGTH; i++)
	{
		printf("%d\t",i);
	}
	putchar('\n');

	
	for (i = 1; i <= max; ++i)
	{
		for (j = 1; j <= MAXLENGTH; j++)
		{
			if (num[j] > 0)
			{
				printf("*\t");
				num[j]--;
			}
			else
				printf("\t");
		}
		putchar('\n');
	}
	
	return 0;

}
