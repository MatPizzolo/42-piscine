/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpizzolo <mpizzolo@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 18:10:51 by mpizzolo          #+#    #+#             */
/*   Updated: 2022/11/17 12:22:15 by mpizzolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	signs_count(char *str)
{
	int	negative_count;
	int	i;

	i = 0;
	negative_count = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 48 && str[i] <= 57)
			break ;
		if (str[i] == 45)
			negative_count++;
		i++;
	}
	return (negative_count);
}

int	start_count(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 48 && str[i] <= 57)
			break ;
		i++;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	z;
	int	filterarray;

	z = 0;
	filterarray = 0;
	i = start_count(str);
	while (str[i] >= 48 && str[i] <= 57)
	{
		z = str[i] - 48;
		filterarray *= 10;
		filterarray += z;
		i++;
	}
	i = signs_count(str);
	if (i % 2 != 0)
		filterarray *= -1;
	return (filterarray);
}
/*
int	main()
{    
	char src[] = "	+-+122´3^::wq23s434ab567";
	printf("%d", ft_atoi(src));
	return 0;
}*/
