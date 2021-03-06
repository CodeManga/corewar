/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmthimun <hmthimun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 17:44:28 by tmaske            #+#    #+#             */
/*   Updated: 2017/11/29 11:03:03 by hmthimun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_arrlen(char **arr)
{
	int i;

	i = 0;
	if (arr != NULL && arr[i] != NULL)
	{
		while (arr[i])
			++i;
	}
	return (i);
}
