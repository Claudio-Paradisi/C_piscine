#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *array;
    int i;

    if(min >= max)
        return (NULL);
    i = 0;
    array = (int*)malloc((max - min) * sizeof(int));
    if (array == NULL)
        return (NULL);
    while (i < max)
    {
        array[i] = min;
        i++;
        min++;
    }
    return (array);
}
int main()
{
    int *array = ft_range(5,15);
    int i = 0;

    while(i < 10)
    {
        printf("%d ,", array[i]);
        i++;
    }
    free(array);
    return 0;
}