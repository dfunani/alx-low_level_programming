#include <stdlib.h>
#include <string.h>

/**
 * _strcat - prints a concat of dest and src
 * @dest: What to return as a concat str
 * @src: what to concat
 *
 * Return: str as a char array
 *
 */

char *_strcat(char *dest, char *src)
{
	char *result = malloc(strlen(dest) + strlen(src) + 1);


	strcpy(result, dest);
	strcat(result, src);
	return (result);
}
