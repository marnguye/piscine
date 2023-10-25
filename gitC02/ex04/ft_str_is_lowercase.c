/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marnguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:55:42 by marnguye          #+#    #+#             */
/*   Updated: 2023/09/12 11:55:44 by marnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int main()
{
	printf("%d", ft_str_is_lowercase("abcdefghijklmnopqrstuvwxyz"));
	printf("\n%d", ft_str_is_lowercase("ABCDEFGHIJKLMNOPRSTUVWXYZ"));
	printf("\n%d", ft_str_is_lowercase("ab1241eifsdjd"));
}*/
