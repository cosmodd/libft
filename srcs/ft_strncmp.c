/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 15:12:49 by mrattez           #+#    #+#             */
/*   Updated: 2022/03/15 14:42:03 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compares two strings until a maximum of n characters.
 *
 * @param s1 The first string to compare.
 * @param s2 The second string to compare.
 * @param n The size of the strings.
 * @return The difference between the two strings.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	a;
	unsigned char	b;
	size_t			i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		a = s1[i];
		b = s2[i];
		if (a != b)
			return (a - b);
		i++;
	}
	return (0);
}
