/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:17:27 by danalvar          #+#    #+#             */
/*   Updated: 2024/10/27 02:50:56 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		ft_check_input(char *str);
int		ft_atoi_basic(char *str, int **inputs);
int		**ft_mallocn(int size);
void	ft_putstr(char *str);
void	ft_free(int **matrix);
char	*ft_split(char *str);
char	*string_zeros(char *str, int times);

void	print_matrix(int **matrix, int dimension)
{
	int		i;
	int		j;
	char	num;

	i = 0;
	while (i < dimension)
	{
		j = 0;
		while (j < dimension)
		{
			num = matrix[i][j] + '0';
			write(1, &num, 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}

void	*rush01(char *str)
{
	int		**inputs;
	int		**matrix;
	char	init[4 * 4];

	inputs = ft_mallocn(4);
	ft_atoi_basic(str, inputs);
	print_matrix(inputs, 4);
	matrix = ft_mallocn(4);
	ft_atoi_basic(string_zeros(init, 4), matrix);
	print_matrix(matrix, 4);
	ft_free(inputs);
	return ((void *)1);
}

int	main(int argc, char *argsv[])
{
	if (argc == 2 && ft_check_input(argsv[1]) == 0)
	{
		ft_split(argsv[1]);
		if (!rush01(argsv[1]))
		{
			ft_putstr("\nError malloc\n");
			return (1);
		}
	}
	else
	{
		ft_putstr("Error");
		return (1);
	}
}
