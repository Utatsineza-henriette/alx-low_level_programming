#include"main.h"

#include<stdio.h>

/**
 * main - Don't swap horses in crossing a stream
 * description: using swap_intfunction
 * a: first entry
 * b: second entry
 * return: 0
 */
void swap_int(int *a, int *b)
{
	int temp;
	temp=*a;
		*a=*b;
		*b=temp;
}
