/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 21:54:14 by danalvar          #+#    #+#             */
/*   Updated: 2024/10/29 22:03:56 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(int argc, char *argsv[])
{
	int	i;

	i = argc - 1;
	while (i > 0)
	{
		write(1, argsv[i], ft_strlen(argsv[i]));
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
