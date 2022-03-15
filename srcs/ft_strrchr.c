/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 12:25:24 by mrattez           #+#    #+#             */
/*   Updated: 2022/03/15 14:43:42 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Finds the last occurrence of a character in a string.
 *
 * @param s The string to search in.
 * @param c The character to search for.
 * @return The last occurrence of the character in the string.
 */
char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	q;
	int		i;

	str = (char *)s;
	q = c;
	i = 0;
	while (*str++)
		i++;
	while ((i--) + 1)
		if (*(--str) == q)
			return (str);
	return ((void *)0);
}
