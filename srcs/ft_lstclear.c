/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 11:54:17 by mrattez           #+#    #+#             */
/*   Updated: 2022/03/15 14:20:52 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Clears a list.
 *
 * @param lst The list to clear.
 * @param del The function to use to free the data.
 */
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*next;

	next = *lst;
	while (next)
	{
		current = next;
		next = current->next;
		ft_lstdelone(current, del);
	}
	*lst = NULL;
}
