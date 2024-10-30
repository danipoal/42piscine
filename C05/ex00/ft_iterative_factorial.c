/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 20:59:05 by danalvar          #+#    #+#             */
/*   Updated: 2024/10/29 21:04:24 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	sum;

	sum = 1;
	while (nb > 1)
	{
		sum = sum * nb;
		nb--;
	}
	return (sum);
}

/*#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argsv[])
{
	int	nb;
	int	res;

	if (argc != 2)
		return (1);
	nb = atoi(argsv[1]);
	res = ft_iterative_factorial(nb);
	printf("%i\n", res);
	return (0);	
}*/
