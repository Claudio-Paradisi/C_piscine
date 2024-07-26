/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparadis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 20:00:22 by cparadis          #+#    #+#             */
/*   Updated: 2024/07/15 10:34:49 by cparadis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main ()
{
	int a,div, mod, b;
	a = 587;
	b = 6;
	ft_div_mod(a,b,&div,&mod);
	printf("%d\n%d", div, mod);
	
}*/
