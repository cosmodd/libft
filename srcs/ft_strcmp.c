/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 09:41:52 by mrattez           #+#    #+#             */
/*   Updated: 2022/03/15 14:37:20 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compares two strings.
 *
 * @param s1 The first string to compare.
 * @param s2 The second string to compare.
 * @return The difference between the two strings.
 */
int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	a;
	unsigned char	b;
	int				i;

	i = 0;
	while (s1[i] || s2[i])
	{
		a = s1[i];
		b = s2[i];
		if (a != b)
			return (a - b);
		i++;
	}
	return (0);
}
