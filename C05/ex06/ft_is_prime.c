/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 21:42:32 by danalvar          #+#    #+#             */
/*   Updated: 2024/10/30 21:45:54 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	res;

	res = nb -1;
	while (nb > 1)
	{
		if (nb % res == 0)
			return (res);
		res--;
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_is_prime(13));
	return (0);
}*/
