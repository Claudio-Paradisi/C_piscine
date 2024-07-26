/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparadis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 17:05:28 by cparadis          #+#    #+#             */
/*   Updated: 2024/07/16 11:17:40 by cparadis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size -1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				ft_swap((tab + j), (tab + j + 1));
			}
			j++;
		}
		i++;
	}
}

/*int	main ()
{
	int array [5] = {50, 25, 30, 20, 28};

	int i = 0;

	while (i < 5)
	{
		printf("%d",array[i]);
		printf(", ");
		i++;
	} 

	i = 0;

	printf("\n");
	
	ft_sort_int_tab(&array[0],5);

	while (i < 5)
        {
                printf("%d",array[i]);
                printf(", ");
                i++;
        }
	return 0;
}*/
