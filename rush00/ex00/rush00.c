/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 21:25:22 by danalvar          #+#    #+#             */
/*   Updated: 2024/10/20 21:34:46 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_choosechar(int x, int y, int countx, int county)
{
	if ((countx == 1 && county == 1) || (countx == 1 && county == y)
		|| (countx == x && county == 1) || (countx == x && county == y))
	{
		ft_putchar('o');
	}
	else if (county == y || county == 1)
	{
		ft_putchar('-');
	}
	else if (countx == 1 || countx == x)
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	countx;
	int	county;

	if (x <= 0 || y <= 0)
	{
		write(1, "Error: Values must be over 0.\n", 29);
		return ;
	}
	county = 1;
	while (county <= y)
	{
		countx = 1;
		while (countx <= x)
		{
			ft_choosechar(x, y, countx, county);
			countx ++;
		}
		ft_putchar('\n');
		county ++;
	}
}
