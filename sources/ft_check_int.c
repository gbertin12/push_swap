/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 09:26:45 by gbertin           #+#    #+#             */
/*   Updated: 2022/08/01 18:08:00 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_check_max_int(char *nbr)
{
	char	*max;
	int		i;
	int		y;

	max = "2147483647";
	i = 0;
	y = 0;
	if (ft_strlen(nbr) < 10)
		return (1);
	else if (ft_strlen(nbr) < 11 && nbr[i] == '-')
		return (1);
	if (nbr[0] == '-')
	{
		max = "2147483648";
		i++;
	}
	while (nbr[i] == '0' && nbr[i + 1] != 0)
		i++;
	if (nbr[i] == '0' && nbr[i + 1] == 0)
		return (1);
	while (nbr[i] && nbr[y])
	{
		if (max[y] < nbr[i])
			return (0);
		i++;
		y++;
	}
	if (nbr[i] && !nbr[y])
		return (0);
	return (1);
}
