/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 21:31:12 by danalvar          #+#    #+#             */
/*   Updated: 2024/10/30 21:41:36 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	result;

	result = nb;
	while (result > 0)
	{
		if (result * result == nb)
			return (result);
		result--;
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_sqrt(49));
	return (0);
}*/
