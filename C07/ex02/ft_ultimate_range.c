/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:38:20 by danalvar          #+#    #+#             */
/*   Updated: 2024/11/05 18:22:58 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *) malloc((max - min) * sizeof(int));
	if (*range == NULL)
		return (-1);
	i = 0;
	size = max - min;
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (size);
}

/*#include <stdio.h>

int	main(void)
{
	int	*arr;
	int	i;
	int	size;

	size = ft_ultimate_range(&arr, 1, 4);
	if (size == -1)
	{
		printf("Error\n");
		return (1);
	}
	i = 0;
	while (arr[i])
	{
		printf("%i\n", arr[i]);
		i++;
	}
	return (0);
}*/
