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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	for (char letter = 'a'; letter != 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
