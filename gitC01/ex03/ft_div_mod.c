/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marnguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 11:46:07 by marnguye          #+#    #+#             */
/*   Updated: 2023/09/08 12:21:42 by marnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 20;
	b = 5;

	ft_div_mod(a, b, &div, &mod);
	printf("mod %d\n ", mod);
	printf("div %d\n ", div);
}*/
