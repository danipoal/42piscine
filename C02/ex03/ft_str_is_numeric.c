/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:49:28 by danalvar          #+#    #+#             */
/*   Updated: 2024/10/23 15:54:30 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	isnum;

	i = 0;
	isnum = 1;
	while (str[i] != '\0')
	{
		if (str[i] > 57 || str[i] < 48)
		{
			isnum = 0;
		}
		i++;
	}
	return (isnum);
}

/*int	main(void)
{
	char	str[] = " ";
	int a = ft_str_is_numeric(str);
	printf("%i\n", a);

}*/
