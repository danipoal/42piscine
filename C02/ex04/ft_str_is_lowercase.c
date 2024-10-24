/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:49:28 by danalvar          #+#    #+#             */
/*   Updated: 2024/10/23 16:01:04 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	islow;

	i = 0;
	islow = 1;
	while (str[i] != '\0')
	{
		if (str[i] > 122 || str[i] < 97)
		{
			islow = 0;
		}
		i++;
	}
	return (islow);
}

/*int	main(void)
{
	char	str[] = "ddede2";
	int a = ft_str_is_lowercase(str);
	printf("%i\n", a);

}*/
