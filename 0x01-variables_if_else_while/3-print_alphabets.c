#include<dtdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - entry point
 * Return: always success
 */
int main(void)
{

	char lowercase;

	for (lowercase = "a"; lowercase = "z"; lowercase++)
	{

		putchar(lowercase);
		putchar("\n");

	}
	for (lowercase = "A"; lowercase = "Z"; lowercase++)
	{
		putchar(lowercase);
		putchar("\n");
	}
	return (0);
}
