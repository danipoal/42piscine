/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_tens.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 11:31:17 by dagredan          #+#    #+#             */
/*   Updated: 2024/11/03 22:38:03 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush02.h"

bool	ft_handle_composite_numbers(t_dictionary **head, char *key)
{
	char	tmp;

	tmp = key[1];
	key[1] = '0';
	if (!ft_print_value(head, key))
		return (false);
	write(1, "-", 1);
	key[0] = tmp;
	key[1] = '\0';
	if (!ft_print_value(head, key))
		return (false);
	return (true);
}

/*
 *	Print the two digits in tens and units. 
 */
bool	ft_handle_tens(t_dictionary **head, char *number, int index)
{
	char	key[3];
	bool	return_value;

	key[0] = number[index];
	key[1] = number[index + 1];
	key[2] = '\0';
	return_value = true;
	if (key[0] == '0' && key[1] == '0')
		return (true);
	else if (key[0] == '0' && key[1] > '0')
	{
		key[0] = key[1];
		key[1] = '\0';
		return_value = ft_print_value(head, key);
	}
	else if (key[0] == '1' && (key[1] >= '0' && key[1] <= '9'))
		return_value = ft_print_value(head, key);
	else if (key[0] > '1' && key[1] == '0')
		return_value = ft_print_value(head, key);
	else if (!ft_handle_composite_numbers(head, key))
		return (false);
	write(1, " ", 1);
	return (return_value);
}
