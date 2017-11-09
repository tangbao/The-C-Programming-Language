/*
 *
 *
 * 1-11.c
 *
 *
 * test the programme for counting words.
 *
 *
 * tangbao 2015.12.03
 *
 *
 */

/*
 *
 *
 * 测试边界条件。
 *
 * ——无输入
 * ——没有单词（只有换行符）
 * ——没有单词（只有空格、制表符、换行符）
 * ——每个单词各占一行（没有空格和制表符）
 * ——单词出现于文本行首的情况
 * ——单词出现于一串空格之后的情况
 *
 */

#include<stdio.h>
#define IN 1
#define OUT 0

int main()
{
	int c,nl,nw,nc,state;
	
	state = OUT;
	nl = nw = nc =0;
	while((c = getchar()) != EOF)
	{
		++nc;
		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT)
		{
			state = IN;
			++nw;
		}
	}
	printf("%d %d %d\n",nl,nw,nc);
	return 0;
}
