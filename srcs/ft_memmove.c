/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 12:09:11 by mrattez           #+#    #+#             */
/*   Updated: 2022/03/15 14:30:31 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies a memory area safely.
 *
 * @param dst The destination memory area.
 * @param src The source memory area.
 * @param len The size to copy.
 * @return The pointer to the destination memory area.
 */
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	int				i;

	if (!dst && !src)
		return (dst);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = -1;
	if (s < d)
		while (++i < (int)len)
			*(d - i + len - 1) = *(s - i + len - 1);
	else
		while (++i < (int)len)
			*(d + i) = *(s + i);
	return (dst);
}
