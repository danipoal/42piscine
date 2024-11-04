/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 21:46:42 by danalvar          #+#    #+#             */
/*   Updated: 2024/11/01 21:14:19 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;
	int	isprime;

	while (1)
	{
		isprime = 1;
		i = nb - 1;
		while (i > 1 && isprime == 1)
		{
			if (nb % i == 0)
			{
				isprime = 0;
			}
			else if (i == 2)
				return (nb);
			i--;
		}
		nb++;
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_find_next_prime(90));
	return (0);

}*/
