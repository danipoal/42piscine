/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 21:28:31 by danalvar          #+#    #+#             */
/*   Updated: 2024/10/28 22:52:54 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char str)
{
	if (str > 57 || str < 48)
		return (0);
	return (1);
}

int	ft_atoi(char *str)
{
	int	nb;
	int	i;
	int	sign;
	
	nb = 0;
	while (*str == ' ')
		str++;
	sign = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = sign * -1;
		str++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_str_is_numeric(str[i]) == 1)
			nb = nb * 10 + str[i] - '0';
		else
			return (nb * sign);
		i++;
	}

	return (nb * sign);
}

/*#include <stdio.h>

int	main(void)
{
	int		nb;
	char	str[] =	"  +--3231";

	nb = ft_atoi(str);
	printf("%s\n", str);
	printf("%i\n", nb);
	return (0);
}*/
