/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpizzolo <mpizzolo@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:47:44 by mpizzolo          #+#    #+#             */
/*   Updated: 2022/11/10 15:50:28 by mpizzolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
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
