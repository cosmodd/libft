/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:20:55 by mrattez           #+#    #+#             */
/*   Updated: 2022/10/12 16:24:16 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Converts a string to an double.
 *
 * @param str The string to convert.
 * @return The converted double.
 */
double	ft_atof(char *str)
{
	double	integer;
	double	decimal;
	double	sign;

	integer = 0.0;
	decimal = 0.0;
	sign = 1.0;
	while (*str && (ft_isspace(*str) || *str == '-' || *str == '+'))
		sign *= (*str++ != '-') * 2 - 1;
	while (*str && ft_isdigit(*str) && *str != '.')
		integer = integer * 10 + (*str++ - '0');
	if (*str++ != '.')
		return (sign * (integer + decimal));
	while (*str && ft_isdigit(*str))
		str++;
	while (*(--str) && ft_isdigit(*str))
		decimal = decimal / 10.0 + (*str - '0') / 10.0;
	return (sign * (integer + decimal));
}
