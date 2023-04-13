#include "main.h"

/**
 * strtow - check the code.
 * @str: variable
 * Return: Always 0.
 */
char **strtow(char *str)
{
	char **p;
	int i;
	int counter;
	
	counter = 0;
	for (i = 0;str[i] != '\0'; i++)
	{
		if (str[i] != ' '){
			counter++;
		}
	}

	return (str);
}
/*
get string
	make new 2 dimosional arrey ( pointer)
	we gonna loop through string to get size
		exclude spaces
		and add \0 to the size and null
	malloc using the size (maybe+1)
	return in case malloc NULL
	we loop again thrugh string:
		we push each chrachter to [i][j+n]
			and when we reach the end (z+1=space)
				push \0 in [i][j+1]
			** OR **
			and when we reach space and z-1 = notspace
				we push \0
			when u push \0 we incremnt i, to next line
				u start pushing in i+1
			if u reach
------
"      ALX School         #cisfun      "
j>	0 1 2 3
i:0 []
i:1 [A,L,X,'\0']
i:2 [S,c,h,o,o,l,'\0']
i:3 [#,c,i,s,f,u,n,'\0',NULL]
*/