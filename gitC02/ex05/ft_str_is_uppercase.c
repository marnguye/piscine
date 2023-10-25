/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marnguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:42:07 by marnguye          #+#    #+#             */
/*   Updated: 2023/09/12 12:42:10 by marnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int main()
{
	printf("\n%d", ft_str_is_uppercase("ABCDEFGHIJKLMNOPRSTUVWXYZ"));
	printf("%d", ft_str_is_uppercase("abcdefghijklmnopqrstuvwxyz"));
	printf("\n%d", ft_str_is_uppercase("ab1241eifsdjd"));
}*/
