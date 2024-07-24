#include <stdio.h>

int ft_fibonacci(int index)
{
    int result;

    result = 0;
    if (index < 0)
        return (-1);
    if (index <= 1)
        result = index;
    else
    {
        result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
    }
    return (result);
}

/*int main(void)
{
    int num = ft_fibonacci(3);
    printf("%d", num);
    return 0;
}*/