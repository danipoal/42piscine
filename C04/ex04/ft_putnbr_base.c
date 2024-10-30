/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 22:54:19 by danalvar          #+#    #+#             */
/*   Updated: 2024/10/29 17:19:47 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	contador;

	contador = 0;
	while (str[contador] != '\0')
		contador++;
	return (contador);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ft_strlen(base) == 0 || ft_strlen(base) == 1)
		return (1);
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j] || base[i] == '-'
				|| base[i] == '+')
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;
	int	dec;
	int	quot;

	if (check_base(base) == 1)
		return ;
	len = ft_strlen(base);
	dec = 1;
	while (nbr / dec >= len)
		dec = dec * len;
	while (dec > 0)
	{
		quot = nbr / dec;
		nbr = nbr - quot * dec;
		dec = dec / len;
		write(1, &base[quot], 1);
	}
}

/*#include <stdio.h>
#include <stdlib.h>

int	main(int argsc, char *argsv[])
{
	int	nb;

	if (argsc != 3)
	{
		printf("Introduce parametros\n");
		return (0);
	}
	nb = atoi(argsv[1]);
	ft_putnbr_base(nb, argsv[2]);
	return (0);
}*/
