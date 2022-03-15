/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:29:27 by mrattez           #+#    #+#             */
/*   Updated: 2022/03/15 14:47:06 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Converts a character to lowercase.
 *
 * @param c The character to convert.
 * @return The converted character.
 */
int	ft_tolower(int c)
{
	return (c + (c >= 'A' && c <= 'Z') * 32);
}
