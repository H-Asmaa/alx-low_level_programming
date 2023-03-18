#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;
    int j;
    int l;

    for (i = 48; i <= 57; i++)
    {
        for (j = i++; j <= 57; j++)
        {
	        for (l = j++; l <= 57; l++)
	        {
	        	putchar(i);
		        putchar(j);
		        putchar(l);
		        if (i != 57 && j != 57 && l != 57){
		        	putchar(',');
		            putchar(' ');
				}
	        }
        }
    }
    putchar('\n');
    return (0);
}
