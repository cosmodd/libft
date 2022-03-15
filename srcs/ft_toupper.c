/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:25:33 by mrattez           #+#    #+#             */
/*   Updated: 2022/03/15 15:11:57 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Converts a character to uppercase.
 *
 * @param c The character to convert.
 * @return The converted character.
 */
int	ft_toupper(int c)
{
	return (c - (c >= 'a' && c <= 'z') * 32);
}
