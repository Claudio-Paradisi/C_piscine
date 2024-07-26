/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparadis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:53:26 by cparadis          #+#    #+#             */
/*   Updated: 2024/07/16 12:24:36 by cparadis         ###   ########.fr       */
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

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size / 2)
	{
		ft_swap(&tab[i], &tab[size - 1 - i]);
		i++;
	}
}

/*int main()
{
	int array[5] = {1,2,3,4,5};
	
	int i = 0;
	while (i < 5)
	{
		printf("%d", array[i]);
		i++;
	}
	printf("\n");
	ft_rev_int_tab(&array[0], 5);

	i = 0;
	while (i < 5)
        {
                printf("%d", array[i]);
		i++;
        }
        printf("\n");
	return 0;
}*/
