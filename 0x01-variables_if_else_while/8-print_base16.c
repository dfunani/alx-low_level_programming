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
	int digit;

	for (digit = 48; digit != 58; digit++)
	{
		putchar(digit);
	}
	for (letter = 'a'; letter != 'f' + 1; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
