#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
	putchar('\n');
	return (0);
}
