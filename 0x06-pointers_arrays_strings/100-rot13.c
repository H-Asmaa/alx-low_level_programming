#include "main.h"

/**
 * rot13 - check the code
 * @str: pointer
 * Return: char.
 */
char *rot13(char *str)
{
    int i;
    int j;
    char arrayClear[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char arrayCoded[] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n'};

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; j < 26 && (str[i] == arrayClear[j] || str[i] == arrayClear[j] - 32); j++)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = arrayCoded[j];
            }
            else
            {
                str[i] = arrayCoded[j] - 32;
            }
        }
    }
    return (str);
}
