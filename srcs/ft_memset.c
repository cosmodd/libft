/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 15:34:15 by mrattez           #+#    #+#             */
/*   Updated: 2022/03/15 14:31:06 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Sets a memory area to a value.
 *
 * @param b The memory area to set.
 * @param c The value to set the memory area to.
 * @param len The size of the memory area.
 * @return The pointer to the memory area.
 */
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s;
	size_t			i;

	s = b;
	i = -1;
	while (++i < len)
		s[i] = (unsigned char) c;
	return (b);
}
