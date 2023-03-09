/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpizzolo <mpizzolo@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 22:30:56 by mpizzolo          #+#    #+#             */
/*   Updated: 2022/11/16 23:17:22 by mpizzolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		if (s1[i] < s2[i] || s1[i] > s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char	*swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	printing(char **argv, int argc)
{
	int	i;
	int	z;

	i = 1;
	while (i < argc)
	{
		z = 0;
		while (argv[i][z])
		{
			ft_putchar(argv[i][z]);
			z++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	should_swap;
	int	args;
	int	i;
	int	z;

	i = 1;
	args = argc - 1;
	while (i < args)
	{		
		z = 1;
		while (z < args)
		{	
			should_swap = 0;
			should_swap = ft_strcmp(argv[z], argv[z + 1]);
			if (should_swap > 0)
				ft_swap(&argv[z], &argv[z + 1]);
			z++;
		}
		i++;
	}
	printing(argv, argc);
	return (0);
}
