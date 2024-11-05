/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_thousands.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 11:31:17 by dagredan          #+#    #+#             */
/*   Updated: 2024/11/03 23:00:33 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush02.h"

/*
 *  Print the thousands digit.
 */
bool	ft_print_thousands(t_dictionary **head, char *number, int i, char *key)
{
	int		zeros_i;

	key[0] = '1';
	zeros_i = 1;
	while (zeros_i < ft_strlen(number) - i)
	{
		key[zeros_i] = '0';
		zeros_i++;
	}
	key[zeros_i] = '\0';
	if (!ft_print_value(head, key))
		return (false);
	write(1, " ", 1);
	return (true);
}

/*
 *  Handle the thousands digit.
 */
bool	ft_handle_thousands(t_dictionary **head, char *number, int i)
{
	char	key[39];
	bool	print;

	print = false;
	if (i > 1)
		print = number[i] > '0' || number[i - 1] > '0' || number[i - 2] > '0';
	else if (i > 0)
		print = number[i] > '0' || number[i - 1] > '0';
	else if (i == 0 && number[i] > '0')
	{
		key[0] = number[i];
		key[1] = '\0';
		if (!ft_print_value(head, key))
			return (false);
		write(1, " ", 1);
		print = true;
	}
	if (print)
	{
		if (!ft_print_thousands(head, number, i, key))
			return (false);
	}
	return (true);
}
