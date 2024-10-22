/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 19:50:42 by danalvar          #+#    #+#             */
/*   Updated: 2024/10/21 20:29:22 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_num(char n1, char n2)
{
	char	c11;
	char	c12;
	char	c21;
	char	c22;

	c11 = n1 / 10 + '0';
	c12 = n1 % 10 + '0';
	c21 = n2 / 10 + '0';
	c22 = n2 % 10 + '0';
	write(1, &c11, 1);
	write(1, &c12, 1);
	write(1, " ", 1);
	write(1, &c21, 1);
	write(1, &c22, 1);
	if (n1 == 98 && n2 == 99)
		return ;
	else
		write (1, ", ", 2);
}

void	ft_second_group(int n1)
{
	int	n2;

	n2 = n1 + 1;
	while (n2 < 100)
	{
		write_num(n1, n2);
		n2 ++;
	}
}

void	ft_print_comb2(void)
{
	int	n1;

	n1 = 0;
	while (n1 < 100)
	{
		ft_second_group(n1);
		n1++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
