/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbesnard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 11:28:49 by tbesnard          #+#    #+#             */
/*   Updated: 2023/07/10 12:02:22 by tbesnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main() {
	char source[] = "Bonjour";
	char destination[20];
	
	ft_strcpy(destination, source);
	
	printf("Chaîne source : %s\n", source);
	printf("Chaîne destination : %s\n", destination);
	
	return 0;
}*/
