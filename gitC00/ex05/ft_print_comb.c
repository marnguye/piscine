/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frdescam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 10:54:48 by frdescam          #+#    #+#             */
/*   Updated: 2023/09/07 17:29:10 by marnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(void)
{
	char	comma;
	char	space;

	comma = ',';
	space = ' ';
	write(1, &comma, 1);
	write(1, &space, 1);
}

void	write_xyz_comb(int x, int y, int z)
{
	char	x_char;
	char	y_char;
	char	z_char;

	x_char = x + '0';
	y_char = y + '0';
	z_char = z + '0';
	write(1, &x_char, 1);
	write(1, &y_char, 1);
	write(1, &z_char, 1);
	if (!(x == 7 && y == 8 && z == 9))
	{
		ft_putchar();
	}
}

void	ft_print_comb(void)
{
	int		x;
	int		y;
	int		z;

	x = 0;
	while (x < 10)
	{
		y = x + 1;
		while (y < 10)
		{
			z = y + 1;
			while (z < 10)
			{
				if (z == x || z == y)
				{
					continue ;
				}
				if (x != y && x != z && y != z)
					write_xyz_comb(x, y, z);
				z++;
			}
			y++;
		}
		x++;
	}
}
