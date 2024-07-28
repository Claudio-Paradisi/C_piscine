#include <stdio.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
    char *dest;
    int i;
    int len;

    i = 0,
    len = 0;
    while (src[len] != '\0')
        len++;
    dest = (char *)malloc((len +1 ) * sizeof(char));
    if (dest == NULL)
        return (NULL);
    while(i < len)
    {
        dest[i] = src[i];
        i++;
    }
    dest[len] = '\0';
    return (dest);
}

int main(int ac, char **av)
{
    char *str;
    if (ac > 1)
    str = ft_strdup(av[1]);
    printf("%s", str);
    return 0;
}
