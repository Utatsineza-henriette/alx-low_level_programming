#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - entrypoint
 * Return: always success
 */
int main(void)

{
	char c;

	for (c = "a"; c <= "z"; c++)
	{
		putchar(c);
		putchar("\n");
	}
	for (c = "A"; c <= "Z"; c++)
	{
		putchar(c);
		putchar("\n");
	}
	return (0);
}
