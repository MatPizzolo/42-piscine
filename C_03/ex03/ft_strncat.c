/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpizzolo <mpizzolo@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:30:02 by mpizzolo          #+#    #+#             */
/*   Updated: 2022/11/15 22:40:39 by mpizzolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	z;

	i = 0;
	while (dest[i] != '\0')
		i++;
	z = 0;
	while ((src[z] != '\0') && z < nb)
	{
		dest[i] = src[z];
		z++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main(){
	char str1[40] = "hola";
	char str2[] = "Mateo";
	printf("%s\t", ft_strncat(str1, str2, 3));
	printf("%s\n", strncat(str1, str2, 3));
	return 0;
}*/
