/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparadis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 12:00:33 by cparadis          #+#    #+#             */
/*   Updated: 2024/07/12 12:51:31 by cparadis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_helper(char c, unsigned n)
{
	char result;

	result = 0;
	if (n == 0)
		result = c / 10 + '0';
	else
		result = c % 10 + '0';
	return result;
}

void	ft_print_comb2(void)
{
	char a;
	char b;

	a = 0;

	while (a <= 98)
	{
		b = a +1;
		while( b <= 99 )
		{
			write (1, ft_helper(a, 0), 1);
			write (1, ft_helper(a, 1), 1);
			write (1, " ", 1);
			write (1, ft_helper(b, 0), 1);
			write (1, ft_helper(b, 1), 1);
			if (a == 98 || b == 99)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}	
}

int main (void)
{
	ft_print_comb2();

	return (0);
}
