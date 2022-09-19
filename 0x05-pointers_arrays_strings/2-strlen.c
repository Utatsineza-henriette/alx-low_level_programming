#include"main.h"

#include<stdio.h>

/**
 * main - This report, by its very length, defends itself against the risk of being read
 * description: using _strlen function
 * s: input string
 * return: the length of string
 */
int _strlen(char *s)
{
	for(int index = 0; s[index] != '\0'; index++)
		;
	return(index);
}
