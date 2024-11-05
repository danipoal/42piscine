/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 21:16:26 by danalvar          #+#    #+#             */
/*   Updated: 2024/10/27 02:45:55 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write (1, str, 1);
		str++;
	}
	write (1, "\0", 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*
* We check if the input is 31, if not FAIL
* We check if the pairs are nums beetw 1 & 4
*  @params *str - string to check 
*  @return  int - 1 = Error, 0 = OK
*/
int	ft_check_input(char *str)
{
	int	i;

	if (ft_strlen(str) != 31)
		return (1);
	i = 0;
	while (i < ft_strlen(str))
	{
		if (i % 2 == 0 && !(str[i] <= '4' && str[i] >= '1'))
			return (1);
		i++;
	}
	return (0);
}

/*
* It splits the numeric chars, deleting the ' ' between
*  @params *str - The string with spaces
*  @return *str - The string without
*/
char	*ft_split(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			j = i;
			while (str[j] != '\0')
			{
				str[j] = str[j + 1];
				j++;
			}
		}
		i++;
	}
	return (str);
}

/*
* Pass the number in char to Integer, only for 1 to 4
*  @params *str - Recibe a string with nums prechecked
*  @params **int - The number in int array 
*/
void	ft_atoi_basic(char *str, int **nums)
{
	int	i;
	int	j;
	int	count;

	count = 0;
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4 && str[count] != '\0')
		{
			nums[i][j] = str[count] - '0';
			j++;
			count++;
		}
		i++;
	}
}
