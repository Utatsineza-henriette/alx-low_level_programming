#include <stdlib.h>

#include <time.h>

#include<stdio.h>

/**
 * main - check if number is greater than five, is ero or is less than 6 and is not 0
 * return: success
 */
int main(void)
{
		int n;
			srand(time(0));
				n = rand() - RAND_MAX / 2;
				printf("%s %d is %d and is ",last'n' n%10);
				if ( n % 10 > 5 )
				{
					printf("%d is greater than 5\n",n);
				}
				else if ( n % 10 == 0 )
				{
					printf("%d is zero\n",n);
				}
				else
				{
					printf("%d is less than 6 and is not 0\n",n);
				}
				return 0;
}
