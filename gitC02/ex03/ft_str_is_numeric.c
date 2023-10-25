/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marnguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:26:45 by marnguye          #+#    #+#             */
/*   Updated: 2023/09/12 11:26:47 by marnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int main()
{
	printf("%d", ft_str_is_numeric("0123456789"));
	printf("\n%d", ft_str_is_numeric("012dsfhs34567"));
	printf("\n%d", ft_str_is_numeric("._7849374013"));
}*/
