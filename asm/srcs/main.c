/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstreak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 15:23:29 by lstreak           #+#    #+#             */
/*   Updated: 2017/09/29 17:05:32 by lstreak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <asm.h>

int		main(int ac, char **av)
{
	int		i;

	i = 1;
	if (ac > 1)
	{
		while (av[i])
		{
			ft_asm(av[i]);
			i++;
		}
	}
	return (0);
}