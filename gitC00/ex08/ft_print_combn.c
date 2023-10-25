/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marnguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:06:18 by marnguye          #+#    #+#             */
/*   Updated: 2023/09/22 12:06:21 by marnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1 ,&c, 1);
}

void recursion(int n, char *arr, char digit)
{
	if (n == 0)
	{
		ft_putchar(arr[0]);
		ft_putchar(arr[1]);
		if(arr[0] != '9' - n + 1)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		return;
	}
	if (digit <= '9')
	{
		arr[n - 1] = digit;
		recursion(n - 1, arr, digit + 1);
	}
	else
	{
		return;
	}

	if (n < 1)
	{
		recursion(n ,arr, digit + 1);
	}
}

void ft_print_combn(int n)
{
	if (n < 1 || n >= 10)
	{
		return;
	}
	char arr[n];
	arr[n - 1] = '0';
	recursion(n, arr, '0');
}

int main()
{
	ft_print_combn(3);
	return (0);
}
