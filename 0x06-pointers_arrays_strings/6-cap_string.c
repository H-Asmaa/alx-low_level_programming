#include "main.h"

/**
 * string_toupper - check the code
 * @str: pointer
 * Return: void.
 */
char *cap_string(char *str)
{
    int i;

    for (i = 1; str[i] != '\0'; i++)
    {
        /* check for word separators */
        if (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n'
            || str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.'
            || str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"'
            || str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{'
            || str[i - 1] == '}')
        {
            /* check if current character is lowercase */
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] -= ('a' - 'A');
        }
    }

    return (str);
}
