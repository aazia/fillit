/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 16:29:53 by azkeever          #+#    #+#             */
/*   Updated: 2018/11/13 17:11:52 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_intlen(int n)
{
	int l;

	l = (n <= 0) ? 1 : 0;
	while (n != 0)
	{
		n /= 10;
		l++;
	}
	return (l);
}
