/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:01:53 by mrattez           #+#    #+#             */
/*   Updated: 2022/03/15 14:16:51 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Fills a memory area with zeros.
 *
 * @param s The memory area to fill.
 * @param n The size of the memory area.
 */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
