/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 11:51:59 by mrattez           #+#    #+#             */
/*   Updated: 2022/03/15 14:19:19 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if a character is a space.
 *
 * @param c The character to check.
 * @return true if the character is a space, false otherwise.
 */
int	ft_isspace(int c)
{
	return ((c >= 9 && c <= 13) || c == ' ');
}
