/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:37:39 by danalvar          #+#    #+#             */
/*   Updated: 2024/10/23 18:40:51 by danalvar         ###   ########.fr       */
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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	length;

	count = 0;
	length = ft_strlen(src);
	while (count < size)
	{
		if (count == size - 1)
			dest[count] = '\0';
		else
			dest[count] = src[count];
		count ++;
	}
	return (length);
}

/*int	main(void)
{
	char	src[] = "Hola que tal estas mi pana";
	char	destination[10];
	int	size;

	size = 10;
	int a = ft_strlcpy(destination, src, size);
	printf("%i. Destino: %s \n%i. Origen: %s \n",size, destination, a, src);

}*/
