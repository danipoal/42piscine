/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:38:20 by danalvar          #+#    #+#             */
/*   Updated: 2024/11/05 17:49:21 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	array = (int *) malloc((max - min) * sizeof(int));
	i = 0;
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}

/*#include <stdio.h>

int	main(void)
{
	int	*arr;
	int	i;

	arr = ft_range(1, 4);
	i = 0;
	while (arr[i])
	{
		printf("%i\n", arr[i]);
		i++;
	}
	return (0);
}*/
