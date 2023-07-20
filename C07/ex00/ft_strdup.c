/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbesnard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:49:19 by tbesnard          #+#    #+#             */
/*   Updated: 2023/07/20 15:06:47 by tbesnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return(i);
}

char	*ft_strdup(char *src)
{
	int	i;
	int	srclen;
	char	*pnt;

	srclen = ft_strlen(src);
	pnt = malloc((srclen + 1) * sizeof(char));
	if (!pnt)
		return(NULL);
	i = 0;
	while (src[i])
	{
		pnt[i] = src[i];
		i++;
	}
	pnt[i] = '\n';
	return(pnt);
}

int	main(int argc, char **argv)
{
	if(argc > 0)
	{
		printf("strdup: %s\n", strdup(argv[1]));
		printf("ft_strdup: %s", ft_strdup(argv[1]));
	}
	return(0);
}
