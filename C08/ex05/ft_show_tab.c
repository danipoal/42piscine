/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:36:39 by danalvar          #+#    #+#             */
/*   Updated: 2024/11/07 18:04:25 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

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

void	ft_show_tab(struct s_stock_str *par);
{
	int	i;

	i = 0;
	while (par[i]->src != 0)
	{
		write(1, par[i].src, ft_strlen(par[i]->src));
		write(1, "\n", 1);
		write(1, par[i]., ft_strlen(par[i]->src));
		write(1, "\n", 1);
		write(1, par[i].src, ft_strlen(par[i]->src));
		write(1, "\n", 1);
		i++;
	}
}

int	main(void)
{
	ft_show_tab(par);

	return (0);
}
