/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marnguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:27:50 by marnguye          #+#    #+#             */
/*   Updated: 2023/09/26 14:28:44 by marnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				dest1;
	unsigned int	src1;

	dest1 = 0;
	src1 = 0;
	while (dest[dest1] != '\0')
	{
		dest1++;
	}
	while (src1 < nb && src[src1] != '\0')
	{
		dest[dest1] = src[src1];
		dest1++;
		src1++;
	}
	dest[dest1] = '\0';
	return (dest);
}

/*int main (void)
{
	char src[50] = "BLABLABLA";
	char dest[6] = "LOL";
	printf("\n%s", ft_strncat(dest, src, 2));
	return (0);
}*/
