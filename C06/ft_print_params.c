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
    _write(1, "\n", 1);
}

int main(int ac, char **av)
{
    int i;

    i = 1;
    while(i < ac)
    {
        ft_putstr(av[i]);
        i++;
    }
    
    return (0);
}