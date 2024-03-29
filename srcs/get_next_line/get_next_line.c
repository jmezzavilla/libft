/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 22:29:01 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/22 19:56:23 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*line;
	int			bytes;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = ft_strjoin_gnl(0, buffer);
	if (ft_check_newline(buffer))
		return (line);
	bytes = read(fd, buffer, BUFFER_SIZE);
	if (bytes < 0)
	{
		free(line);
		return (NULL);
	}
	while (bytes)
	{
		line = ft_strjoin_gnl(line, buffer);
		if (ft_check_newline(buffer))
			break ;
		bytes = read(fd, buffer, BUFFER_SIZE);
	}
	return (line);
}
