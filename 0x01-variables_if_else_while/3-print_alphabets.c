#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
/**
* main - entry point
*
* Description: eval if pos, neg or zero
*
* Return: 0
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter != 'z' + 1; letter++)
	{
		putchar(letter);
	}
	for (letter = 'a'; letter != 'z' + 1; letter++)
	{
		putchar(toupper(letter));
	}
	putchar('\n');
	return (0);
}
