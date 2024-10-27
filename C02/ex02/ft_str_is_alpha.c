/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:49:28 by danalvar          #+#    #+#             */
/*   Updated: 2024/10/26 00:37:27 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	isalpha;

	i = 0;
	isalpha = 1;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z' )
			&& !(str[i] >= 'a' && str[i] <= 'z'))
			isalpha = 0;
		i++;
	}
	return (isalpha);
}

/*int	main(void)
{
	char	str[] = "0azzZZa0aaAAAAA";
	int a = ft_str_is_alpha(str);
	printf("%i\n", a);

}*/
