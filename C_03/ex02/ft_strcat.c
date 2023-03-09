/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpizzolo <mpizzolo@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:22:36 by mpizzolo          #+#    #+#             */
/*   Updated: 2022/11/15 22:38:02 by mpizzolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	z;

	i = 0;
	while (dest[i] != '\0')
		i++;
	z = 0;
	while (src[z] != '\0')
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
	char dest[45] = "1515 ";
	char src[] = "hola mi bro";
	printf("%s\n", ft_strcat(dest, src));
	printf("holis\n");
	printf("%s\n", strcat(dest, src));
	return 0;
}*/
