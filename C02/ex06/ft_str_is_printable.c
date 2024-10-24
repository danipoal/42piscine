/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:49:28 by danalvar          #+#    #+#             */
/*   Updated: 2024/10/23 16:11:37 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_printable(char *str)
{
	int	i;
	int	isprint;

	i = 0;
	isprint = 1;
	while (str[i] != '\0')
	{
		if (str[i] > 126 || str[i] < 32)
		{
			isprint = 0;
		}
		i++;
	}
	return (isprint);
}

/*int	main(void)
{
	char	str[2];

	str[0] = 12 ;
	
	int a = ft_str_is_printable(str);
	printf("%i\n", a);

}*/
