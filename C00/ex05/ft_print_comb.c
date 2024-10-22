/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 19:50:42 by danalvar          #+#    #+#             */
/*   Updated: 2024/10/21 18:47:41 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_num(char c1, char c2, char c3)
{
	write(1, &c1, 1);
	write(1, &c2, 1);
	write(1, &c3, 1);
	if (c1 == 55 && c2 == 56 && c3 == 57)
	{
		return ;
	}
	else
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	c1;
	char	c2;
	char	c3;

	c1 = 48;
	while (c1 < 58)
	{
		c2 = c1 + 1;
		while (c2 < 58)
		{
			c3 = c2 + 1;
			while (c3 < 58)
			{
				write_num(c1, c2, c3);
				c3 ++;
			}
			c2++;
		}
		c1 ++;
	}
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
