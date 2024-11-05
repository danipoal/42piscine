/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agulanus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:29:20 by agulanus          #+#    #+#             */
/*   Updated: 2024/11/03 22:40:29 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush02.h"

char	*ft_strdup(char *str)
{
	int		len;
	int		i;
	char	*dup;

	if (!str)
		return (NULL);
	len = ft_strlen(str);
	dup = malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	i = -1;
	while (++i < len)
		dup[i] = str[i];
	dup[i] = '\0';
	return (dup);
}
