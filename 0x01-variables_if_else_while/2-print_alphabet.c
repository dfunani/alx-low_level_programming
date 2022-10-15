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

	for (letter = 'a'; letter != 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('z');
	putchar('\n');
	return (0);
}
