/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpizzolo <mpizzolo@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 21:59:32 by mpizzolo          #+#    #+#             */
/*   Updated: 2022/11/10 00:04:27 by mpizzolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	z = '0';
	while (z <= '7')
	{
		y = z + 1;
		while (y <= '8')
		{
			x = y + 1;
			while (x <= '9')
			{
				write(1, &z, 1);
				write(1, &y, 1);
				write(1, &x, 1);
				if (z != '7' || y != '8' || x != '9')
					write(1, ", ", 2);
				x = x + 1 ;
			}
			y = y + 1;
		}
		z = z + 1;
	}
}

/*
int main(){
	ft_print_comb();
	return 0;
}
*/
