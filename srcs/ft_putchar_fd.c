/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 14:42:51 by mrattez           #+#    #+#             */
/*   Updated: 2022/03/15 14:31:19 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Prints a character to a file descriptor.
 *
 * @param c The character to print.
 * @param fd The file descriptor to print the character to.
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
