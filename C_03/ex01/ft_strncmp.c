/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpizzolo <mpizzolo@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:21:19 by mpizzolo          #+#    #+#             */
/*   Updated: 2022/11/15 18:43:49 by mpizzolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
int main(){
	char str1[] = "healo";
	char str2[] = "hezeo";
	printf("%i\t", ft_strncmp(str1, str2, 3));
	printf("%i\n", strncmp(str1, str2, 3));
	printf("%i\t", ft_strncmp(str1, str2, 2));
	printf("%i\n", strncmp(str1, str2, 2));
	return 0;
}*/
