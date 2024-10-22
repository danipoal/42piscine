/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:55:36 by danalvar          #+#    #+#             */
/*   Updated: 2024/10/19 17:03:37 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	*a;

	a = "zyxwvutsrqponmlkjihgfedcba";
	write(1, a, 26);
}

/*int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}*/
