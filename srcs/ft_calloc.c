/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:09:37 by mrattez           #+#    #+#             */
/*   Updated: 2022/03/15 14:17:47 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates (with malloc(3)) and returns a “fresh” memory area
 *
 * @param count The number of elements to allocate.
 * @param size The memory area size of each element.
 * @return A pointer to the allocated memory area.
 */
void	*ft_calloc(size_t count, size_t size)
{
	void	*dest;
	size_t	i;

	dest = malloc(count * size);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < count * size)
		((unsigned char *)dest)[i++] = 0;
	return (dest);
}
