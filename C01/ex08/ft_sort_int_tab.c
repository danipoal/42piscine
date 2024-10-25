/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 23:53:42 by danalvar          #+#    #+#             */
/*   Updated: 2024/10/22 17:56:24 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tab[i] > tab[j] && i <= j)
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

/*int	main(void)
{
	int	tab[6] = {3, 0, 2, 4, 1, 5};
	int	i = 0;

	ft_sort_int_tab(tab, 6);
	while(i < 6)
	{
		char c = tab[i] + '0';
		printf("%c", c);
		i++;
	}
}*/
