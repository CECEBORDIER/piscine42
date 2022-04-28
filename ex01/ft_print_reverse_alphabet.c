#include main.h 

ft_print_reverse_alphabet(void)
{
  char a = 'z';
    while (a-- >= 'a')
    {
        ft_putchar(a + 1);
    }
}