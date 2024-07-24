#include <stdio.h>

int ft_find_next_prime(int nb)
{
    int i;
    int condition;

    i = 2;
    condition = 1;
    if (nb <= 1)
        return (2);
    while (i < nb)
    {
        if(nb % i == 0)
        {
            condition = 0;
            break;
        }
        i++;
    }
    if (condition == 0)
        nb = ft_find_next_prime(nb + 1);
    
    return (nb);
}

/*int main ()
{
    int num = ft_find_next_prime(2);
    printf("%d", num);
    return 0;
}*/