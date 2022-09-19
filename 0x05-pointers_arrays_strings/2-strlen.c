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
	int i;
	for(i=0; s[i]!='\0'; i++);
	return i;
}
