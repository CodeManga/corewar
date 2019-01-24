/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chrpos.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmthimun <hmthimun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 17:39:53 by tmaske            #+#    #+#             */
/*   Updated: 2017/11/29 11:03:33 by hmthimun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_chrpos(char *str, char c)
{
	int counter;
	int i;

	counter = 0;
	i = 0;
	while (str[i] && str[i] != c)
	{
		counter++;
		i++;
	}
	if (str[counter] == c)
		return (counter);
	else
		return (-1);
}
