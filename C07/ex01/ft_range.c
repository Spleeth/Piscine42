/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbesnard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:08:17 by tbesnard          #+#    #+#             */
/*   Updated: 2023/07/20 15:27:17 by tbesnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*pnt;
	int	pnt_len;
	int	i;

	if (min >= max)
		return(NULL);
	pnt_len = max - min;
	if (pnt_len < 1)
		pnt = NULL;
	else
	{
		pnt = malloc((pnt_len) * sizeof(int));
		if (!pnt)
			return(NULL);
		i = 0;
		while (i < pnt_len)
		{
			pnt[i] = (min + i);
			i++;
		}
	}
	return (pnt);
}

int	main(int argc, char **argv)
{
	int	min;
	int	max;
	int	*tab;
	int	range;
	int	i;

	if(argc > 2)
	{
		min = atoi(argv[1]);
		max = atoi(argv[2]);
		range = max - min;
		tab = ft_range(min, max);
		if(tab && range > 0)
		{
			i = 0;
			while (range > i)
			{
				printf("%d", tab[i++]);
				if ( range > i)
					printf(", ");
			}
			printf("\n");
		}
		else
			printf("NULL\n");
	}
	else
		printf("required 'min' 'max'\n");
	return(0);
}
