/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbesnard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 11:53:34 by tbesnard          #+#    #+#             */
/*   Updated: 2023/07/24 11:54:25 by tbesnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	nb_ret;

	if (nb < 0)
		return (0);
	nb_ret = 1;
	while (nb > 1)
		nb_ret *= nb--;
	return (nb_ret);
}
