/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpizzolo <mpizzolo@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 22:30:38 by mpizzolo          #+#    #+#             */
/*   Updated: 2022/11/16 23:20:43 by mpizzolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	z;
	int	args;

	args = argc - 1;
	while (args > 0)
	{
		z = 0;
		while (argv[args][z])
		{
			ft_putchar(argv[args][z]);
			z++;
		}
		ft_putchar('\n');
		args--;
	}
	return (0);
}
