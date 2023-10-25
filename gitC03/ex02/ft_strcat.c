/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marnguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:39:18 by marnguye          #+#    #+#             */
/*   Updated: 2023/09/13 14:39:21 by marnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	dest1;
	int	src1;

	dest1 = 0;
	src1 = 0;
	while (dest[dest1] != '\0')
	{
		dest1++;
	}
	while (src[src1] != '\0')
	{
		dest[dest1] = src[src1];
		dest1++;
		src1++;
	}
	dest[dest1 + src1] = '\0';
	return (dest);
}

// int main ()
// {
// 	char src[50] = "World";
// 	char dest[6] = "Hello";
// 	printf("\n%s", ft_strcat(src, dest));
// }
