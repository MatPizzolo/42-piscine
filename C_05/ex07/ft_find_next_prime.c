/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpizzolo <mpizzolo@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 09:29:27 by mpizzolo          #+#    #+#             */
/*   Updated: 2022/11/19 18:16:37 by mpizzolo         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}
