/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbesnard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:43:16 by tbesnard          #+#    #+#             */
/*   Updated: 2023/07/25 14:37:23 by tbesnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*pnt;
	int	pnt_len;
	int	i;

	if (min >= max)
		return (NULL);
	pnt_len = max - min;
	if (pnt_len < 1)
		pnt = NULL;
	else
	{
		pnt = malloc(pnt_len * sizeof(int));
		if (!pnt)
			return (NULL);
		i = 0;
		while (pnt_len > i)
		{
			pnt[i] = (min + i);
			i++;
		}
	}
	return (pnt);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	pnt_len;

	pnt_len = max - min;
	if (pnt_len < 1)
	{
		*range = NULL;
		return (0);
	}
	else
	{
		*range = ft_range(min, max);
		if (!range)
		{
			return (-1);
		}
	}
	return (pnt_len);
}
