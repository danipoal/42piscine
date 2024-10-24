/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:06:46 by danalvar          #+#    #+#             */
/*   Updated: 2024/10/22 18:54:22 by danalvar         ###   ########.fr       */
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

char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	int	len;

	len = ft_strlen(src);
	i = 0;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	*a = "Hola";
	char	b[5];

	ft_strcpy(b, a);
	printf("%s\n", b);
	return (0);
}*/
