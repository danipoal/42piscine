/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 22:12:02 by danalvar          #+#    #+#             */
/*   Updated: 2024/10/21 22:57:10 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int 	a = 10;
	int 	b = 5;
	int	div = 0;
	int	mod = 0;

	ft_div_mod(a, b, &div, &mod);

	char	sdiv;
	char	smod;

	sdiv = div + '0';
	smod = mod + '0';
	
	write (1, &sdiv, 1);
	write (1, &smod, 1);
	return (0);
}*/
