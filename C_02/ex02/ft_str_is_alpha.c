/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpizzolo <mpizzolo@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:40:28 by mpizzolo          #+#    #+#             */
/*   Updated: 2022/11/10 15:28:08 by mpizzolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	else
	{
		while (str[i] != '\0')
		{
			if (str[i] < 'a' || str[i] > 'z')
				if (str[i] < 'A' || str[i] > 'Z')
					return (0);
			i++;
		}
		return (1);
	}
}

/*
int main(){
    result = ft_str_is_alpha(str1);
    printf("%i", result);
    return 0;
}
*/
