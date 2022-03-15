/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:47:40 by mrattez           #+#    #+#             */
/*   Updated: 2022/03/15 14:37:33 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Duplicates a string.
 *
 * @param s1 The string to duplicate.
 * @return A pointer to the duplicated string.
 */
char	*ft_strdup(const char *s1)
{
	char	*dest;
	size_t	i;

	dest = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
