#include "main.h"
/**
 * main - prints _putchar without using print
 *
 * Return: 0
 *
 */

int main(void)
{
	char* word = "_putchar\n";
	int i = 0;
	for(i = 0; i < 10; i++)
	{
		_putchar(word[i]);
	}
	
	return (0);
}
