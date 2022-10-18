#include <unistd.h>
/**
 * main - prints _putchar without using print
 *
 * Return: 0
 *
 */

int main(void)
{
	char *word = "_putchar\n";
	int i = 0;

	for (i = 0; i < 9; i++)
	{
		write(1, &word[i], 1);
	}

	return (0);
}
