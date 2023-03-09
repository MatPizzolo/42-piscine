/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpizzolo <mpizzolo@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 22:39:05 by mpizzolo          #+#    #+#             */
/*   Updated: 2022/11/10 00:00:36 by mpizzolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
	{
	int	division;
	int	module;

	division = *a / *b;
	module = *a % *b;
	*a = division;
	*b = module;
}
