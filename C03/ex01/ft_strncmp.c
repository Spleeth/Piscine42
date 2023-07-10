/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbesnard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 17:28:50 by tbesnard          #+#    #+#             */
/*   Updated: 2023/07/10 17:59:22 by tbesnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] && s2[i]) && (s1[i] == s2[i]) && i < (n - 1))
		i++;
	if (n < 1)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
