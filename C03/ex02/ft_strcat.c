/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbesnard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 10:25:33 by tbesnard          #+#    #+#             */
/*   Updated: 2023/07/12 10:49:57 by tbesnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;
	
	i = 0;
	while(dest[i])
	{
		i++;
	}
	j = 0;
	while(src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
	
}

int main() {
    char dest[100] = "Hello";
    char src[] = "world";
    
    printf("Avant l'appel à ft_strcat : dest = %s\n", dest);
    printf("Avant l'appel à ft_strcat : src = %s\n", src);
    
    ft_strcat(dest, src);
    
    printf("Après l'appel à ft_strcat : dest = %s\n", dest);
    
    return 0;
}
