/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 02:24:18 by danalvar          #+#    #+#             */
/*   Updated: 2024/10/27 02:28:21 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_free(int **matrix)
{
	int	i;

	i = -1;
	while (++i < 4)
		free(matrix[i]);
	free(matrix);
}

int	**ft_mallocn(int size)
{
	int	**inputs;
	int	i;

	inputs = (int **)malloc(size * sizeof(int *));
	i = -1;
	while (++i < size)
	{
		inputs[i] = (int *)malloc(size * sizeof(int));
		if (!inputs[i])
			return (NULL);
	}
	return (inputs);
}

char	*string_zeros(char *str, int times)
{
	int	i;

	i = 0;
	while (i < times)
	{
		str[i] = '0';
		i++;
	}
	str[i] = '\0';
	return (str);
}
