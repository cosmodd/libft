/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strl_join.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 10:23:34 by mrattez           #+#    #+#             */
/*   Updated: 2022/03/15 14:38:24 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Joins a list of string with a separator.
 *
 * @param list The list to join.
 * @param sep The separator to use.
 * @return The joined string.
 */
char	*ft_strl_join(char **list, char *sep)
{
	char	*str;
	int		str_len;
	int		sep_len;
	int		i;

	i = 0;
	str_len = 0;
	sep_len = ft_strlen(sep);
	while (list[i])
	{
		str_len += ft_strlen(list[i]);
		str_len += sep_len * (i > 0);
		i++;
	}
	str = ft_calloc(str_len + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (list[i])
	{
		if (i > 0)
			ft_strlcat(str, sep, str_len + 1);
		ft_strlcat(str, list[i++], str_len + 1);
	}
	return (str);
}
