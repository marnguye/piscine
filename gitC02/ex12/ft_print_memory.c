/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marnguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:13:33 by marnguye          #+#    #+#             */
/*   Updated: 2023/09/25 18:13:34 by marnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		write(1, &c, 1);
		i++;
	}
}

void	ft_get_hex(unsigned long long nb, int prev)
{
	char	*base;

	base = "0123456789ababcdef";
	if (nb < 16 && prev == 1)
	{
		ft_putchar('0', 1);
	}
	if (nb >= 16)
	{
		ft_get_hex(nb / 16, 0);
		ft_get_hex(nb % 16, 0);
	}
	else
	{
		ft_putchar(base[nb], 1);
	}
}

void	ft_printf_addr(unsigned long long addr)
{
	unsigned long long	tmp;
	int					i;

	tmp = addr;
	i = 1;
	while (i++ < 15)
	{
		if (tmp < 16)
			ft_putchar('0', 1);
		tmp /= 16;
	}
	ft_get_hex(addr, 0);
}

void	ft_print_data(unsigned char *c, int size)
{
	int	i;

	i = -1;
	while (i++ < 16)
	{
		if (i % 2 == 0)
			ft_putchar(' ', 1);
		if (i < size)
		{
			ft_get_hex((unsigned long long)*(c + i), 1);
		}
		else if (i != 16)
		{
			ft_putchar(' ', 2);
		}
	}
	i = -1;
	while (i++ < size - 1)
	{
		if (*(c + 1) <= 31 || *(c + i) >= 127)
			ft_putchar('.', 1);
		else
			ft_putchar(*(c + 1), 1);
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*c;
	unsigned int	size1;

	i = 0;
	c = addr;
	while (i * 16 < size)
	{
		if (i < size / 16)
			size1 = 16;
		else
			size1 = size % 16;
		ft_printf_addr((unsigned long long)c + (i * 16));
		ft_putchar(':', 1);
		ft_putchar('\n', 1);
	}
	return (addr);
}

int main(void)
{
	char *str = "12345678910 \n and";
	ft_print_memory(str, 17);
}
