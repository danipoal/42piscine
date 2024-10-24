/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:49:28 by danalvar          #+#    #+#             */
/*   Updated: 2024/10/23 19:34:15 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 96 && str[i] < 122 && i == 0)
			|| ((str[i] > 96 && str[i] < 122)
				&& (str[i - 1] < 48
					|| (str[i - 1] < 'A' && str[i - 1] > 57)
					|| (str[i - 1] > 'Z' && str[i - 1] < 'a')))
			|| ((str[i] > 96 && str[i] < 122) && str[i - 1] > 'z')
			|| (str[i] > 96 && str[i] < 122 && str[i - 1] == 32)
		)
			str[i] = str[i] - 32;
		else if (str[i] > 64 && str[i] < 91 && i != 0)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "H6ola co5mo es-ta mi gente, f kLOK aaaKKKK";
	char* a = ft_strcapitalize(str);
	printf("%s\n", a);

}*/
