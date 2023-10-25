/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marnguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:24:08 by marnguye          #+#    #+#             */
/*   Updated: 2023/09/12 10:24:11 by marnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*int main()
{
	printf("%d", ft_str_is_alpha("abcdefghijklmnopqrstuvwxyz"));
	printf("\n%d", ft_str_is_alpha("ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
	printf("\n%d", ft_str_is_alpha("abCdEf23ghIJKlmnoPqRStu"));
	printf("\n%d", ft_str_is_alpha("abc./defGHIJK012"));
}*/
