#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - entry point
 *
 * Returns: always(success)
 */
int main(void)
{
	char low, q, e;
	q="q"
		e="e"
		for(low = "a"; low <= "z"; low++)
		{
			if(low != "q" && low != "e")
				putchar(low);
		}
	putchar("\n");

	return(0);
}
