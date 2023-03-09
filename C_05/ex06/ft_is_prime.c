/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpizzolo <mpizzolo@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 09:14:39 by mpizzolo          #+#    #+#             */
/*   Updated: 2022/11/17 09:43:50 by mpizzolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	len_prime;
	int	counter;

	len_prime = nb;
	counter = 0;
	i = 2;
	if (nb == 1 || nb == 2)
		return (0);
	while (len_prime > 0)
	{
		if (nb % len_prime == 0)
			counter++;
		len_prime--;
	}
	if (counter == 2)
		return (1);
	return (0);
}
