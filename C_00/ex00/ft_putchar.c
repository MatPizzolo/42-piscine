/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpizzolo <mpizzolo@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 21:50:46 by mpizzolo          #+#    #+#             */
/*   Updated: 2022/11/09 15:04:12 by mpizzolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
		{
	write(1, &c, 1);
}

/*
int main(){
	char c = 'd';
	ft_putchar(c);
	return 0;
}	 

*/
