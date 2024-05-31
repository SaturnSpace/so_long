/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarpent <acarpent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 14:34:09 by acarpent          #+#    #+#             */
/*   Updated: 2024/05/31 13:53:37 by acarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	char 	*map;
	char	**split;

	if (ac == 2)
	{
		ft_checkname(av[1]);	
		map = ft_getmap(av[1]);
		split = ft_split(map, '\n');
		ft_parsemap(split);
	}
	else
	{
		ft_printf("Error\nArgument number must be 1 !");
		return (0);
	}
	free(map);
	return (0);
}
