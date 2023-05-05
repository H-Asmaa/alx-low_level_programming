#include <stdio.h>
int _putchar(char c)
{
	write(1, &c, 1);
	return 0;
}
void print_binary(unsigned long int n)
{
    unsigned long int len;
    int i, j = 0;
    for (i = 63; i >= 0; i--)
    {
        len = n >> i;
        if (len & 1)
        {
            _putchar('1');
            j++;
        }
        else if (j)
            _putchar('0');
    }
    if (j == 0)
        _putchar('0');
}
int main(void)
{
    print_binary(0);
    printf("\n");
    print_binary(1);
    printf("\n");
    print_binary(98);
    printf("\n");
    print_binary(1024);
    printf("\n");
    print_binary((1 << 10) + 1);
    printf("\n");
    return (0);
}
