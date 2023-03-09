/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpizzolo <mpizzolo@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 20:12:46 by mpizzolo          #+#    #+#             */
/*   Updated: 2022/11/19 17:12:21 by mpizzolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	checkerror(char *str)
{
	int	i;
	int	z;
	int	length_base;

	length_base = ft_strlen(str);
	i = 0;
	if (str[0] == '\0' || length_base == 1)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
			return (0);
		z = i + 1;
		while (z < ft_strlen(str))
		{
			if (str[i] == str[z])
				return (0);
			z++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		length_base;
	int		error;
	long	nb;

	nb = nbr;
	error = checkerror(base);
	length_base = ft_strlen(base);
	if (error == 1)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr *= -1;
		}
		if (nbr < length_base)
			ft_putchar(base[nbr]);
		if (nbr >= length_base)
		{
			ft_putnbr_base(nbr / length_base, base);
			ft_putnbr_base(nbr % length_base, base);
		}
	}
}
/*
int		main()
{
	ft_putnbr_base(-12, "01");
	printf("\n 1");
	ft_putnbr_base(40, "poneyvif");
	printf("\n 2");
	ft_putnbr_base(867, "0123456789");
	printf("\n 3");
	ft_putnbr_base(535, "0123456789abcdef");
}
*/
