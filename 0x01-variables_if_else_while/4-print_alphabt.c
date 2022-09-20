#include<stdio.h>

/**
 * main - print lowercase alphabetics except q and e
 * return: success
 */
int main(void)
{
	char c;
	for(c="a"; c<="z"; c++)
	{
		if(c!="q" && c!="e")
		{
			putchar(c);
		}
	}
	putchar("\n");
	return 0;
}
