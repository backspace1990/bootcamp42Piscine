#include <unistd.h>

void ft_print_numbers(void)
{
    int k;

    k = '0';
    while (k <= '9')
    {
        write(1, &k, 1);
        k++;
    }
    
}