/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 18:37:28 by jmezzavilla       #+#    #+#             */
/*   Updated: 2023/09/10 15:32:09 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_check_newline(char *s)
{
	size_t	i;
	size_t	j;
	int		isnl;

	i = 0;
	j = 0;
	isnl = 0;
	while (s[i])
	{
		if (isnl)
			s[j++] = s[i];
		if (s[i] == '\n')
			isnl = 1;
		s[i++] = '\0';
	}
	return (isnl);
}

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
