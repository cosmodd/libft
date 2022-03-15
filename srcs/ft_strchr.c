/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 12:25:24 by mrattez           #+#    #+#             */
/*   Updated: 2022/03/15 14:37:06 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Finds the first occurrence of a character in a string.
 *
 * @param s The string to search in.
 * @param c The character to search for.
 * @return The first occurrence of the character in the string.
 */
char	*ft_strchr(const char *s, int c)
{
	char	*out;
	char	search;

	out = (char *)s;
	search = c;
	while (*out)
	{
		if (*out == search)
			return (out);
		out++;
	}
	if (*out == c)
		return (out);
	return ((void *)0);
}
