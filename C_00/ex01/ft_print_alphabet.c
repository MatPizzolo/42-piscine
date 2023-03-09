/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpizzolo <mpizzolo@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 21:53:10 by mpizzolo          #+#    #+#             */
/*   Updated: 2022/11/09 15:07:15 by mpizzolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
		{
	write(1, "abcdefghijklmnopqrstuvwxyz", 26);
}
/*
int main(){
	ft_print_alphabet();
	return 0;
}
*/
