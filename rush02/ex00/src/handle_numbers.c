/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 11:31:17 by dagredan          #+#    #+#             */
/*   Updated: 2024/11/03 21:55:11 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush02.h"

/*
 *	Print the last digit if it is the only digit. 
 */
bool	ft_handle_last_digit(t_dictionary **head, char *number, int index)
{
	char	key[2];

	if (ft_strlen(number) == 1)
	{
		key[0] = number[index];
		key[1] = '\0';
		if (!ft_print_value(head, key))
			return (false);
		write(1, " ", 1);
	}
	write(1, "\b", 1);
	return (true);
}

/*
 *  Print the hundreds digit.
 */
bool	ft_handle_hundreds(t_dictionary **head, char *number, int index)
{
	char	key[4];

	if (number[index] > '0')
	{
		key[0] = number[index];
		key[1] = '\0';
		if (!ft_print_value(head, key))
			return (false);
		write(1, " ", 1);
		key[0] = '1';
		key[1] = '0';
		key[2] = '0';
		key[3] = '\0';
		if (!ft_print_value(head, key))
			return (false);
		write(1, " ", 1);
	}
	return (true);
}

/*
 *  Find what type of digit we are looking at in a partidular index
 *  0: last digit, 1: tens, 2: hundreds, 3: thousands
 */
int	ft_get_digit_type(char *number, int index)
{
	int		type;
	int		i;

	type = -1;
	i = ft_strlen(number);
	while (index < i)
	{
		if (type < 3)
			type++;
		else
			type = 1;
		i--;
	}
	return (type);
}

/*
 *	Entry point to print the whole number digit by digit.
 */
bool	ft_handle_numbers(t_dictionary **head, char *number)
{
	int	digit_type;
	int	index;

	index = 0;
	while (number[index] != '\0')
	{
		digit_type = ft_get_digit_type(number, index);
		if (digit_type == 0)
			if (!ft_handle_last_digit(head, number, index))
				return (false);
		if (digit_type == 1)
			if (!ft_handle_tens(head, number, index))
				return (false);
		if (digit_type == 2)
			if (!ft_handle_hundreds(head, number, index))
				return (false);
		if (digit_type == 3)
			if (!ft_handle_thousands(head, number, index))
				return (false);
		index++;
	}
	return (true);
}
