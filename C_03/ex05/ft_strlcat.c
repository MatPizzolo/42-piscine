/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpizzolo <mpizzolo@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:48:59 by mpizzolo          #+#    #+#             */
/*   Updated: 2022/11/17 09:55:11 by mpizzolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	z;
	unsigned int	dest_length;
	unsigned int	src_length;

	dest_length = ft_strlen(dest);
	src_length = ft_strlen(src);
	i = 0;
	z = dest_length;
	if (size == 0 || size <= dest_length)
		return (src_length + size);
	while (src[i] != '\0' && i < size - dest_length - 1)
	{
		dest[z] = src[i];
		i++;
		z++;
	}		
	dest[z] = '\0';
	return (dest_length + src_length);
}
/*
int main() { 
    char s[] = "hello duplicates"; 
    char target[128] = "target buffer#"; 
     
    printf("Old: \"%s\"\n", target); 
    printf("%i\n", ft_strlcat(target, s, 19)); 
    printf("New: \"%s\"\n", target); 
	
	printf("Old: \"%s\"\n", target);
    printf("%lu\n", strlcat(target, s, 19));
    printf("New: \"%s\"\n", target);
 
    return 0; 
}*/
