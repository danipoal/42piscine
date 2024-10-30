/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 21:14:37 by danalvar          #+#    #+#             */
/*   Updated: 2024/10/29 21:25:05 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	sum;

	if (power < 0)
		return (0);
	sum = 1;
	if (power > 1)
		sum = ft_recursive_power(nb, power -1);
	return (sum * nb);
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
		printf("%i\n", ft_recursive_power(nb, pwr));
		return (0);
	}
	return (1);
}*/
