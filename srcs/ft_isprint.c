/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:16:50 by mrattez           #+#    #+#             */
/*   Updated: 2022/03/15 14:19:05 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks if a character is printable.
 *
 * @param c The character to check.
 * @return true if the character is printable, false otherwise.
 */
int	ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}
