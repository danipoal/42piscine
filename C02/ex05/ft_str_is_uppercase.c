/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:49:28 by danalvar          #+#    #+#             */
/*   Updated: 2024/10/23 16:04:38 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	isup;

	i = 0;
	isup = 1;
	while (str[i] != '\0')
	{
		if (str[i] > 90 || str[i] < 65)
		{
			isup = 0;
		}
		i++;
	}
	return (isup);
}

/*int	main(void)
{
	char	str[] = "AA";
	int a = ft_str_is_uppercase(str);
	printf("%i\n", a);

}*/
