/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marnguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:13:32 by marnguye          #+#    #+#             */
/*   Updated: 2023/09/19 14:13:33 by marnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		return (nb * ft_iterative_power(nb, power -1));
	}
}
// int main()
// {
// 	int a = 2;
// 	int b = 3;
// 	int result = ft_iterative_power(2, 3);
// 	printf("%d^%d = %d\n", a, b, result);
// }
