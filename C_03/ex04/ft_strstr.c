/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpizzolo <mpizzolo@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:32:45 by mpizzolo          #+#    #+#             */
/*   Updated: 2022/11/16 20:23:03 by mpizzolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	z;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	z = 0;
	while (str[i] != '\0')
	{
		while (str[i + z] == to_find[z] && str[i + z] != '\0')
			z++;
		if (to_find[z] == '\0')
			return (str + i);
		i++;
		z = 0;
	}
	return (0);
}
/*
int main() { 
    char str1[] = "hola me gsta el cambio en arg";
    char str2[] = "gs";
    printf("%s\t", ft_strstr(str1, str2));
	printf("%s", strstr(str1, str2));
    return 0;
}*/
