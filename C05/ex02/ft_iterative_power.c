/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 21:07:07 by danalvar          #+#    #+#             */
/*   Updated: 2024/10/29 21:18:44 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	sum;

	if (power < 0)
		return (0);
	sum = 1;
	i = 0;
	while (i < power)
	{
		sum = sum * nb;
		i++;
	}
	return (sum);
}

/*#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argsv[])
{
	int	nb;
	int	pwr;

	if (argc == 3)
	{
		nb = atoi(argsv[1]);
		pwr = atoi(argsv[2]);
		printf("%i\n", ft_iterative_power(nb, pwr));
		return (0);
	}
	return (1);
}*/
