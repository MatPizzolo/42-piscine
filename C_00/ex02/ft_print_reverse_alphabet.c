/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpizzolo <mpizzolo@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 21:54:32 by mpizzolo          #+#    #+#             */
/*   Updated: 2022/11/09 22:28:07 by mpizzolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
		{
	write(1, "zyxwvutsrqponmlkjihgfedcba", 26);
}

/*
int main(){
	ft_print_reverse_alphabet();
	return 0;
}
*/
