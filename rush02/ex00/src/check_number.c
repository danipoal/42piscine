/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:50:50 by danalvar          #+#    #+#             */
/*   Updated: 2024/11/03 21:57:34 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush02.h"

bool	check_number(char *nchar)
{
	int	i;

	i = 0;
	while (nchar[i] != '\0')
	{
		if (!ft_is_numeric(nchar[i]))
			return (false);
		i++;
	}
	return (true);
}
