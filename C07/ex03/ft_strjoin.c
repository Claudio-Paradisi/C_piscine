/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparadis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 13:37:27 by cparadis          #+#    #+#             */
/*   Updated: 2024/07/30 15:21:30 by cparadis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		str++;
		count++;
	}
	return (count);
}

int	ft_total_length(int size, char **strs, char *sep)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (i < size)
	{
		result = result + ft_strlen(strs[i]);
		if (i < size - 1)
			result = result + ft_strlen(sep);
		i++;
	}
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		j;
	int		c;
	int		total_length;

	i = 0;
	c = 0;
	total_length = ft_total_length(size, strs, sep);
	str = (char *)malloc((total_length + 1) * sizeof(char));
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			str[c++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i < size - 1)
			str[c++] = sep[j++];
		i++;
	}
	str[c] = '\0';
	return (str);
}
