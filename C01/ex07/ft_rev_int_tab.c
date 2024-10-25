/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 23:12:41 by danalvar          #+#    #+#             */
/*   Updated: 2024/10/21 23:52:11 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[size - i - 1];
		tab[size - i - 1] = tab[i];
		tab[i] = tmp;
		i++;
	}
}

/*int	main(void)
{
	int	a[5] = {0, 1, 2, 3, 4};

	
	ft_rev_int_tab(a, 5);

	int i = 0;
	while(i < 5)
	{
		char c = a[i] + '0';
		printf("%c", c);
		i++;
	}
}*/
