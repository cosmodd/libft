/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:06:24 by mrattez           #+#    #+#             */
/*   Updated: 2022/09/27 15:50:32 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*read_content(int fd, char *buffer, char *excess[])
{
	char	*temp;
	int		rd_size;

	rd_size = 1;
	while (rd_size)
	{
		rd_size = read(fd, buffer, BUFFER_SIZE);
		if (rd_size < 0)
			return (NULL);
		if (rd_size == 0)
			break ;
		buffer[rd_size] = 0;
		if (excess[fd] == NULL)
			excess[fd] = ft_strdup("");
		temp = excess[fd];
		excess[fd] = ft_strjoin(temp, buffer);
		free(temp);
		temp = NULL;
		if (ft_strrchr(buffer, '\n'))
			break ;
	}
	return (excess[fd]);
}

static char	*update_line(char *line)
{
	char	*excess;
	char	*nl;

	nl = ft_strchr(line, '\n');
	if (nl == NULL)
		return (NULL);
	excess = ft_substr(line, nl - line + 1, ft_strlen(line));
	if (excess[0] == 0)
	{
		free(excess);
		excess = NULL;
	}
	line[nl - line + 1] = 0;
	return (excess);
}

char	*get_next_line(int fd)
{
	static char	*excess[1024];
	char		buffer[BUFFER_SIZE + 1];
	char		*line;

	if (read(fd, NULL, 0))
		return (NULL);
	ft_bzero(buffer, BUFFER_SIZE + 1);
	line = read_content(fd, buffer, excess);
	if (line == NULL)
		return (NULL);
	excess[fd] = update_line(line);
	return (line);
}
