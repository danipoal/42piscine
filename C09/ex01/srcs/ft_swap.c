/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:48:24 by danalvar          #+#    #+#             */
/*   Updated: 2024/10/21 22:55:56 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	*pa;
	int	*pb;

	a = 1;
	b = 2;
	pa = &a;
	pb = &b;

	ft_swap(pa, pb);
	char ca = a + '0';
	char cb = b + '0';
	write (1, &ca, 1);
	write (1, &cb, 1);
	
}*/