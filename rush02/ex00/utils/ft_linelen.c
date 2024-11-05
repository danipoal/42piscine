/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linelen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agulanus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:25:55 by agulanus          #+#    #+#             */
/*   Updated: 2024/11/03 22:41:05 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush02.h"
/*
 *	Find line len including '\n'
 */
int	ft_linelen(char *str)
{
	int	len;

	if (!str)
		return (0);
	len = 0;
	while (str[len] != '\0')
	{
		if (str[len] == '\n')
			return (len + 1);
		len++;
	}
	return (len);
}
