/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparadis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 10:22:05 by cparadis          #+#    #+#             */
/*   Updated: 2024/07/15 10:33:46 by cparadis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

/*int main()
{
	int a = 587;
	int b = 6;
	ft_ultimate_div_mod(&a, &b);
	printf("divisione: %d\n", a);
	printf("modulo: %d\n", b);
}*/
