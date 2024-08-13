#include <io.h>

int     ft_strlen(char *str)
{
    int     count;

    count = 0;
    while (*str)
    {
        count++;
        str++;
    }
    return count;
}

int     check_base(char* str,char c, int position)
{
    int     i;

    i = 0;
    if (ft_strlen(str) <= 1)
        return (0);
    if(c == '+' || c == '-' || c == ' ')//to add as well the other whitespaces
        return (0);
    while (i < position)
    {
        if (str[i] == c)
            return 0;
        i++;
    }
    return (1);
}

void    ft_putnbr_dec(int nbr)
{
        char c;
        if (nbr == -2147483648)
        {
            _write(1, "-2147483648", 11);
            return ;
        }
        if (nbr < 0)
        {
            _write(1, "-", 1);
            nbr *= -1;
        }
        if (nbr > 9)
            ft_putnbr_dec(nbr / 10);
        c = nbr % 10 + '0';
        _write(1, &c, 1);
}

void    ft_putnbr_base(int nbr, char *base)
{
    
}