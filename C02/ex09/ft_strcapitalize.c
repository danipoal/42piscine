/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:49:28 by danalvar          #+#    #+#             */
/*   Updated: 2024/10/26 01:41:21 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

int	ft_str_is_alpha(char str)
{
	if (!(str >= 'A' && str <= 'Z' )
		&& !(str >= 'a' && str <= 'z'))
		return (0);
	return (1);
}

int	ft_is_numeric(char str)
{
	if (str > 57 || str < 48)
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (ft_str_is_alpha(str[i]) == 1
			&& ft_str_is_alpha(str[i - 1]) == 0
			&& ft_is_numeric(str[i - 1]) == 0)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42monte+et+un";
	char* a = ft_strcapitalize(str);
	printf("%s\n", a);
}*/
