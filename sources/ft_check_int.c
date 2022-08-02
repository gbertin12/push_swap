/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 09:26:45 by gbertin           #+#    #+#             */
/*   Updated: 2022/08/02 08:42:47 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// int	ft_check_max_int(char *nbr)
// {
// 	char	*max;
// 	int		i;
// 	int		y;

// 	max = "2147483647";
// 	i = 0;
// 	y = 0;
// 	if (ft_strlen(nbr) < 10)
// 		return (1);
// 	else if (ft_strlen(nbr) < 11 && nbr[i] == '-')
// 		return (1);
// 	if (nbr[0] == '-')
// 	{
// 		max = "2147483648";
// 		i++;
// 	}
// 	while (nbr[i] == '0' && nbr[i + 1] != 0)
// 		i++;
// 	if (nbr[i] == '0' && nbr[i + 1] == 0)
// 		return (1);
// 	while (nbr[i] && nbr[y])
// 	{
// 		if (max[y] < nbr[i])
// 			return (0);
// 		else if (max[y] < nbr[i])
// 			return (1);
// 		i++;
// 		y++;
// 	}
// 	if (nbr[i] && !nbr[y])
// 		return (0);
// 	return (1);
// }

int	ft_check_max_int(char *nbr)
{
	char *max;
	int i;

	i = 0;
	max = "2147483647";
	if (ft_strlen(nbr) < 10)
		return (1);
	if (ft_strlen(nbr) < 11 && nbr[0] == '-')
		return (1);
	if (nbr[0] == '-')
	{
		max = "2147483648";
		i++;
	}
	if (!ft_check_int(i, nbr, max))
		return (0);
	return (1);
}

int ft_check_int(int i, char *nbr, char *max)
{
	while (nbr[i] == '0' && nbr[i + 1] != 0)
	{
		if (ft_strlen(&nbr[i]) < 10)
			return (1);
		i++;
	}
	if (ft_strlen(&nbr[i]) > 10)
		return (0);
	while (nbr[i] && *max)
	{
		if (*max < nbr[i])
			return (0);
		else if (*max > nbr[i])
			return (1);
		max++;
		i++;
	}
	return (1);
}
