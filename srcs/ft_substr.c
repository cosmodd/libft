/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 10:22:06 by mrattez           #+#    #+#             */
/*   Updated: 2022/03/15 14:46:32 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Returns a substring of a string.
 *
 * @param s The string to get the substring from.
 * @param start The index of the first character of the substring.
 * @param len The length of the substring.
 * @return The substring.
 */
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	sublen;
	size_t	i;

	if (start > (unsigned int) ft_strlen(s))
		return (ft_strdup(""));
	i = 0;
	sublen = 0;
	while (s[start + sublen] && sublen < len)
		sublen++;
	dst = malloc((sublen + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	while (i < sublen)
	{
		dst[i] = s[start + i];
		i++;
	}
	dst[i] = 0;
	return (dst);
}
