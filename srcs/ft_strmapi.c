/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 14:33:18 by mrattez           #+#    #+#             */
/*   Updated: 2022/03/15 14:41:42 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Maps each character of a string and returns a new string.
 *
 * @param s The string to map.
 * @param f The function to use to map the string.
 * @return The new string.
 */
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*duplicate;

	duplicate = ft_strdup(s);
	if (!duplicate)
		return (NULL);
	i = 0;
	while (s[i])
	{
		duplicate[i] = f(i, s[i]);
		i++;
	}
	return (duplicate);
}
