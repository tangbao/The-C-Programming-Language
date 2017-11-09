/*************************************************************************
	> File Name: 1-13-1.c
	> Author: tangbao
	> Mail: i@tbis.me 
	> Created Time: 2015年12月05日 星期六 22时34分26秒
 ************************************************************************/

//now I use a new vim setting-file.

#include<stdio.h>
#define MAXTIME   15 //a word should appear no more than 15 times
#define MAXLENGTH 11 //a word should have at most 11 letters
#define IN		  1
#define OUT		  0


// print horizontal histogram
int main()
{
	int flag = OUT;
	int c, length = 0;
	int i, j;
	int num[MAXLENGTH+1] = {0};
	
	while ((c = getchar()) != EOF)
	{
		if ((c != ' ' && c != '\t' && c != '\n' ) || flag == OUT)
		{
			length ++;
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
		for (j = 0; j < num[i]; j++)
			printf("*");
		putchar('\n');
	}

	return 0;


}
