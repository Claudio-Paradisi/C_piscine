#include <stdio.h>

int is_special(char c)
{
    int condition;
    
    condition = 1;
    if((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        condition = 0;
    return (condition);
}

char    *ft_strcapitalize(char *str)
{
    int     i;

    i = 1;
    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] -= 32;

    while (str[i] != '\0')
    {
        if(is_special(str[i - 1]) && (str[i] >= 'a' && str[i] <= 'z'))
            str[i] -= 32;
        i++;
    }
    return (str);
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        printf("%s\n", ft_strcapitalize(av[1]));
    }
    return 0;
}