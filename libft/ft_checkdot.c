/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkdot.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: symatevo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 12:36:55 by symatevo          #+#    #+#             */
/*   Updated: 2021/03/31 12:37:22 by symatevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_checkdot(const char *str, int idx)
{
	while (str[idx] != '%')
	{
		if (str[idx] == '.')
			return (1);
		idx--;
	}
	return (0);
}
