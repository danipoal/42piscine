/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:18:33 by danalvar          #+#    #+#             */
/*   Updated: 2024/10/24 21:47:51 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_strlen(char *str)
{
	int	contador;

	contador = 0;
	while (*str != '\0')
	{
		contador++;
		str++;
	}
	return (contador);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	equal;

	equal = 1;
	if (ft_strlen(s1) == ft_strlen(s2))
	{
		i = 0;
		while (i < ft_strlen(s1))
		{
			if (s1[i] != s2[i])
				return (0);
			i++;
		}
	}
	else
		return (0);
	return (equal);
}

/*int	main(void)
{
	int result;
	
	result = ft_strcmp("Hola", "Hila");
	printf("Es igual %i\n", result);
	return (0);
}*/
