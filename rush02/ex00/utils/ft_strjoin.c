/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agulanus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 12:07:08 by agulanus          #+#    #+#             */
/*   Updated: 2024/11/03 22:41:26 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush02.h"

/*
 *	Join two strings and return a pointer containing the content of both.
 *	The result will be s1 + s2 content.
 *
 *	- If allocation fails return a NULL pointer.
 */
char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		size;
	char	*result;

	size = ft_strlen(s1) + ft_strlen(s2);
	result = malloc(sizeof(char) * (size + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (s1 && *s1 != '\0')
	{
		result[i] = *s1;
		s1++;
		i++;
	}
	while (s2 && *s2 != '\0')
	{
		result[i] = *s2;
		s2++;
		i++;
	}
	result[i] = '\0';
	return (result);
}
