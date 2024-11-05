/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agulanus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 20:57:49 by agulanus          #+#    #+#             */
/*   Updated: 2024/11/03 23:21:00 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush02.h"

char	*ft_strndup(char *str, int n)
{
	int		i;
	char	*dup;

	if (!str || n <= 0)
		return (NULL);
	dup = malloc(sizeof(char) * (n + 1));
	if (!dup)
		return (NULL);
	i = -1;
	while (++i < n)
		dup[i] = str[i];
	dup[i] = '\0';
	return (dup);
}
