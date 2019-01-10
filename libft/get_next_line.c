/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 08:56:32 by azkeever          #+#    #+#             */
/*   Updated: 2019/01/10 13:14:04 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_line(char **line, char **sv)
{
	char	*tmp;
	int		len;

	len = 0;
	while (sv[0][len] != '\n' && sv[0][len] != 0)
		len++;
	if (sv[0][len] == '\n')
	{
		*line = ft_strsub(sv[0], 0, len);
		tmp = ft_strdup(sv[0] + len + 1);
		free(sv[0]);
		sv[0] = tmp;
		if (sv[0][0] == '\0')
			ft_strdel(&sv[0]);
	}
	else if (sv[0][len] == '\0')
	{
		*line = ft_strdup(sv[0]);
		ft_strdel(&sv[0]);
	}
	return (1);
}

int		check_all(int nbread, char **sv, char **line)
{
	if (nbread < 0)
		return (-1);
	else if (nbread == 0 && (sv[0] == NULL || sv[0][0] == '\0'))
		return (0);
	return (get_line(line, sv));
}

int		get_next_line(int fd, char **line)
{
	char		buff[BUFF_SIZE + 1];
	int			nbread;
	static char	*sv[33650];
	char		*tmp;

	if (fd < 0 || line == NULL)
		return (-1);
	while ((nbread = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[nbread] = '\0';
		if (sv[0] == NULL)
			sv[0] = ft_strnew(1);
		tmp = ft_strjoin(sv[0], buff);
		free(sv[0]);
		sv[0] = tmp;
		if (ft_strchr(sv[0], '\n'))
			break ;
	}
	return (check_all(nbread, sv, line));
}
