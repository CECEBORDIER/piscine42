#include "main.h"
#include <stdio.h>

int ft_putchar(char c)
{
    return (write(1, &c, 1));
}

int main(void)
{
    ft_print_alphabet();
    ft_putchar('\n');

}