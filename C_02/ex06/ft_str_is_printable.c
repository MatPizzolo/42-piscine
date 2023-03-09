/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpizzolo <mpizzolo@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:12:22 by mpizzolo          #+#    #+#             */
/*   Updated: 2022/11/10 18:20:54 by mpizzolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
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
			if (str[i] < 32 || str[i] > 126)
				return (0);
			i++;
		}
		return (1);
	}
}

/*
int main(){
    char str1[] = "hola08765dfghjk872";
    int result;
    result = ft_str_is_printable(str1);
    printf("%i", result);
    return 0;
}
*/
