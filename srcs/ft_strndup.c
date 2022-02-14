/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:06:10 by mrattez           #+#    #+#             */
/*   Updated: 2022/02/14 15:12:50 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *str, size_t n)
{
	char	*dest;
	size_t	copy_len;
	size_t	i;

	copy_len = ft_strlen(str);
	copy_len = (copy_len < n) * copy_len + (copy_len >= n) * n;
	dest = (char *)malloc(sizeof(char) * (copy_len + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < copy_len)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
