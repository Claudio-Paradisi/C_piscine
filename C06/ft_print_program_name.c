#include <io.h>
#include <fcntl.h>
//cambiare libreria e funzione write poiché questa è per windows
void    ft_putstr(char *str)
{
    while(*str)
    {
        _write(1, str, 1);
        str++;
    }
}

int main(int ac, char **av)
{
    if (ac == 1)
    {
        ft_putstr(av[0]);
    }
    return (0);
}