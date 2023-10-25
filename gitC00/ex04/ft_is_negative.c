/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marnguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:21:34 by marnguye          #+#    #+#             */
/*   Updated: 2023/09/07 17:29:25 by marnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	negative_char;
	char	positive_char;

	negative_char = 'N';
	positive_char = 'P';
	if (n < 0)
		write (1, &negative_char, 1);
	else
		write (1, &positive_char, 1);
}
