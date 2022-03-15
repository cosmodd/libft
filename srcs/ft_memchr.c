/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:50:47 by mrattez           #+#    #+#             */
/*   Updated: 2022/03/15 14:23:40 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Returns the first occurrence of a byte in a memory area.
 *
 * @param s The memory area to search in.
 * @param c The byte to search for.
 * @param n The size of the memory area.
 * @return The first occurrence of the byte in the memory area.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	q;

	str = (unsigned char *)s;
	q = c;
	while (n--)
	{
		if (*str == q)
			return (str);
		str++;
	}
	return ((void *)0);
}
