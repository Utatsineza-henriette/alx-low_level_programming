#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - entry point
 *
 * Returns: always (success)
 */
int main(void)
{
	char low;
	for(low = "a"; low <= "z"; low++)
		putchar(low);
			putchar("\n");
			for(low = "A"; low <= "Z"; low++)
				putchar(low);
			putchar("\n");

			return(0);
}
