#include <io.h>

void    ft_putnbr(int nb)
{
    char    c;

    if (nb == -2147483648)
    {
        _write(1, "-2147483648", 11);
        return ;
    }
    if (nb < 0)
    {
        _write(1, "-", 1);
        nb *= -1;
    }
    if (nb > 9)
    {
        ft_putnbr(nb / 10);
    }
    c = nb % 10 + '0';
    _write(1, &c, 1);
}

int main(void)
{
    ft_putnbr(-2147483648);
    return 0;
}