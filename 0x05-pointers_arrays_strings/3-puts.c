#include"main.h"
#include<stdio.h>
/**
 * main - I do not fear computers. I fear the lack of them
 * decription: using _puts function
 * str: input string
 */
void _puts(char *str)
{
	int i;
	for(i=0; str[i]!='\0'; i++);
	{
		_putschar(str[i]);
	}
	_putschar('\n');
}
