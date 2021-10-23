/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 14:33:18 by mrattez           #+#    #+#             */
/*   Updated: 2021/10/22 14:38:33 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*duplicate;

	duplicate = ft_strdup(s);
	i = 0;
	while (s[i])
	{
		duplicate[i] = f(i, s[i]);
		i++;
	}
	return (duplicate);
}
