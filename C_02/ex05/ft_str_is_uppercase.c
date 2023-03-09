/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpizzolo <mpizzolo@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:51:56 by mpizzolo          #+#    #+#             */
/*   Updated: 2022/11/10 15:52:12 by mpizzolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
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
			if (str[i] < 'A' || str[i] > 'Z')
				return (0);
			i++;
		}
		return (1);
	}
}

/*
int main()
{
    int result;
    char str1[] = "AFHHRyOHOHGSDFF";
    result = ft_str_is_uppercase(str1);
    printf("%i", result);
    return 0;
}
*/
