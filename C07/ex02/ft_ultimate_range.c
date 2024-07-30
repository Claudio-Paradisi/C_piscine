/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparadis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 11:39:50 by cparadis          #+#    #+#             */
/*   Updated: 2024/07/29 17:43:02 by cparadis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*res;
	int	size;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	res = (int *)malloc((max - min) * sizeof(int));
	if (res == NULL)
		return (-1);
	while (min < max)
	{
		res[i] = min;
		min++;
		i++;
	}
	size = i;
	*range = res;
	return (size);
}
