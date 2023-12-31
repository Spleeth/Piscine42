/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbesnard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:10:16 by tbesnard          #+#    #+#             */
/*   Updated: 2023/07/17 16:12:53 by tbesnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc > 1)
	{
		i = 0;
		while (argv[i])
			i++;
		while (i > 1)
		{
			write(1, argv[i - 1], ft_strlen(argv[i - 1]));
			write(1, "\n", 1);
			i--;
		}
	}
	return (0);
}
