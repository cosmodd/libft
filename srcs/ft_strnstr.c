/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:13:50 by mrattez           #+#    #+#             */
/*   Updated: 2022/03/15 14:43:02 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/**
 * @brief Returns a pointer to the first occurrence of the substring needle.
 *
 * @param haystack The string to search in.
 * @param needle The substring to search for.
 * @param len The maximum number of characters to search.
 * @return A pointer to the first occurrence of the substring needle.
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!ft_strlen(needle))
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		j = 0;
		while (i + j < len && haystack[i + j] == needle[j] && needle[j])
		{
			if (!needle[j + 1])
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
