/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:10:03 by danalvar          #+#    #+#             */
/*   Updated: 2024/10/20 22:44:43 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	*a;

	a = "abcdefghijklmnopqrstuvwxyz";
	write(1, a, 26);
}

/*int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/
