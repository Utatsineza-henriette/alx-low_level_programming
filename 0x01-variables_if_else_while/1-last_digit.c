#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - entry point
 *
 * Returns: Always0(success)
 */
int main(void)
{
	int n;
	int L;
	char str[] = "Last digit of";

	srand(time(0));
		n = rand() - RAND_MAX / 2;
		L = n % 10;

		if(L >5)
			printf("%s %d is %d and is greater than5\n",str,n,L);
		else if(L ==0)
			printf("%s %d is %d and is zero\n",str,n,L);
		else if(L < 6)
			printf("%s %d is %d and isless than6 and not 0\n",str,n,L);

		return(0);
}
