/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 21:47:59 by danalvar          #+#    #+#             */
/*   Updated: 2024/10/29 21:53:42 by danalvar         ###   ########.fr       */
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
	int	len;

	if (argc == 1)
	{
		len = ft_strlen(argsv[0]);
		write(1, argsv[0], len);
		write(1, "\n", 1);
	}
	return (1);
}
