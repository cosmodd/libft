/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:55:25 by mrattez           #+#    #+#             */
/*   Updated: 2022/03/15 14:18:55 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks if a character is a digit.
 *
 * @param c The character to check.
 * @return true if the character is a digit, false otherwise.
 */
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
