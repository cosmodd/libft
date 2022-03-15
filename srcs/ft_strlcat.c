/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:49:14 by mrattez           #+#    #+#             */
/*   Updated: 2022/03/15 14:38:39 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Appends the string src to the string dst.
 *
 * @param dst The destination string.
 * @param src The source string.
 * @param dstsize The size of the destination string.
 * @return The size of the string after appending.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = 0;
	while (dstlen < dstsize && src[i] && i < dstsize - dstlen - 1)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	if (dstsize > 0)
		dst[dstlen + i] = 0;
	if (dstsize < dstlen)
		return (dstsize + srclen);
	return (dstlen + srclen);
}
