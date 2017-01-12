/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehuang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 19:41:15 by hehuang           #+#    #+#             */
/*   Updated: 2016/12/21 23:09:12 by hehuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_findchar(const char *str, const char c)
{
	int		j;

	j = 0;
	while (str[j])
	{
		if (str[j] == c)
			return (j);
		j++;
	}
	return (j);
}