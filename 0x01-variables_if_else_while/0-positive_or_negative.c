#include<srdlib.h>

#include<time.h>

#include<stdio.h>

/**
 * main - print if number is positive, zero or negative
 * return: success
 */
int main(void)
{
	int n;
	srand(time(0));
		n = rand() - RAND_MAX / 2;
		if (n > 0 )
		{
			printf("%dis poditive\n",n);
		}
		else if ( n == 0 )
		{
			printf("%d is zero\n",n);
		}
		else
		{
			printf("%d is negative\n",n);
		}
		return 0;
}
