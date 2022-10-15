#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
/**
* main - Entry Point
*
* Description: print using outchar
*
* Return: 0
*/

int main(void) 
{
    int i;
    int j;
    for (i = 48; i < 57; i++)
    {
        for (j = 48; j < 58; j++)
        {
            putchar(i);
            putchar(j);
 
	    if (tolower(i) + tolower(j) != 89)
	    {
		putchar(',');
		putchar(' ');
	    }
        }
    }
    putchar('\n');
    return 0;
}
