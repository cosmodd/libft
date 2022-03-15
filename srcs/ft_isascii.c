/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:10:33 by mrattez           #+#    #+#             */
/*   Updated: 2022/03/15 14:18:40 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks if a character is ASCII.
 *
 * @param c The character to check.
 * @return true if the character is ASCII, false otherwise.
 */
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
