/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpizzolo <mpizzolo@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 19:21:13 by mpizzolo          #+#    #+#             */
/*   Updated: 2022/11/16 19:06:53 by mpizzolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	z;

	ft_strlowcase(str);
	i = 0;
	z = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (z == 1)
				str[i] -= 32;
			z = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			z = 0;
		else
			z = 1;
		i++;
	}
	return (str);
}
/*
int main(){
    char str1[] = "salut,tu vas ? 42mots k quAr9ante-deux; cinquante+et+un";
    printf("%s", ft_strcapitalize(str1));
    return 0;
}*/
