#include"main.h"
/**
 * _strcat - concantenate the string pointed by @src to end of string pointed by @dest
 * @dest: string to be appended
 * @src: string to be concantenated upon
 * returnd:pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, dest_len = 0;
	while(dest[i++])
	dest++;
	for(i = 0; src[i]; i++)
		dest[dest_len++] = src[i];
	return(dest);
}
