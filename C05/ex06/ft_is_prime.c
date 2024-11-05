/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 21:42:32 by danalvar          #+#    #+#             */
/*   Updated: 2024/11/02 23:32:32 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = nb -1;
	while (i > 1)
	{
		if (nb % i == 0)
			return (0);
		i--;
	}
	return (1);
}

/*#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argsv[])
{
	int	nb;

	if (argc == 2)
	{
		nb = atoi(argsv[1]);
		printf("%i\n", ft_is_prime(nb));
	}
	return (0);
}*/
