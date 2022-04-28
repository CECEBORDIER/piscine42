#include "main.h"


int ft_putchar(char c)
{
    return (write(1, &c, 1));
}

int main(void)
{
   ft_print_numbers();
   ft_putchar('\n');
   return (0);
}