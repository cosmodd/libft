/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 11:04:11 by mrattez           #+#    #+#             */
/*   Updated: 2022/03/15 14:44:28 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	in_set(char c, const char *set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (c == 0);
}

/**
 * @brief Removes a set of chars at the beginning and end of a string.
 *
 * @param s1 The string to trim.
 * @param set The set of characters to trim.
 * @return The new string.
 */
char	*ft_strtrim(const char *s1, const char *set)
{
	unsigned int	start;
	unsigned int	end;

	start = 0;
	end = ft_strlen(s1);
	while (in_set(s1[start], set) && start <= end)
		start++;
	while (in_set(s1[end], set) && end >= start)
		end--;
	return (ft_substr(s1, start, end - start + 1));
}
