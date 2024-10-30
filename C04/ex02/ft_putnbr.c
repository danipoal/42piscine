/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:52:50 by danalvar          #+#    #+#             */
/*   Updated: 2024/10/28 21:27:48 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		dec;
	int		res;
	char	character;

	dec = 1;
	while (nb / dec >= 10)
		dec = dec * 10;
	while (dec > 0)
	{
		res = nb / dec;
		nb = nb - res * dec;
		dec = dec / 10;
		character = res + '0';
		write(1, &character, 1);
	}
}

/*int	main(void)
{
	ft_putnbr(344);
	return (0);
}*/
