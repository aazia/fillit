/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 18:53:30 by azkeever          #+#    #+#             */
/*   Updated: 2018/11/13 18:53:32 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(const char c)
{
	if (c == '\t' || c == '\v' || c == '\r' ||
		c == '\f' || c == '\n' || c == ' ')
		return (1);
	return (0);
}
