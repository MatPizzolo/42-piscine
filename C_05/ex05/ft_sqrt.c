/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpizzolo <mpizzolo@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 09:08:15 by mpizzolo          #+#    #+#             */
/*   Updated: 2022/11/19 18:35:25 by mpizzolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	x;

	if (nb <= 0)
	{
		return (0);
	}
	if (nb == 1)
	{
		return (1);
	}
	x = 1;
	while (x < 100)
	{
		if (nb / x == x)
			return (x);
		x++;
	}
	return (0);
}
/*
int main(){
	printf("%i", ft_sqrt(16));
	return 0;
}*/
