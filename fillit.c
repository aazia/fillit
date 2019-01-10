/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 13:26:55 by azkeever          #+#    #+#             */
/*   Updated: 2019/01/10 15:05:08 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		check_file(char *file)
{
	int		fd;
	int		ret;
	char	*line;
	int		i;

	i = 0;

	line = NULL;
	if ((fd = open(file, O_RDONLY)) < 2)
		return (-1);
	while ((ret = get_next_line(fd, &line)) > 0)
	{
		ft_putendl(line);
	}
	return (0);
}

void	find_box()
{
	//furthest right 
}

void	print_box()
{

}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putendl("usage: fillit source_file");
		exit(1);
	}
	if (check_file(argv[1]) < 0)
	{
		ft_putendl("error");
		exit(EXIT_FAILURE);
	}
	find_box();
	print_box();
	return (0);
}

