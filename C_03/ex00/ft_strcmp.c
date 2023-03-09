/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpizzolo <mpizzolo@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:18:37 by mpizzolo          #+#    #+#             */
/*   Updated: 2022/11/15 18:29:47 by mpizzolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] > s2[i])
			return (1);
		if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}
/*
int main()
{
	printf("%d\t", ft_strcmp("he", "Hello"));
	printf("%d\n", strcmp("he", "Hello"));	
	printf("%d\t", ft_strcmp("Hello", "he"));
	printf("%d\n", strcmp("Hello", "he"));
	printf("%d\t", ft_strcmp("he", "he"));
	printf("%d\n", strcmp("he", "he"));
	return 0;
}*/
