/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:46:11 by danalvar          #+#    #+#             */
/*   Updated: 2024/10/26 14:56:46 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	contador;

	contador = 0;
	while (str[contador] != '\0')
		contador++;
	return (contador);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;

	len = ft_strlen(dest) + ft_strlen(src);
	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && i + j < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (len);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	source[] = "Hola%w Pepsicola";
	char	destination[11] = "Adios";
	
	printf("DESTINO: %s\nORIGEN:  %s\n", destination, source);
	int	len = ft_strlcat(destination, source, 11);

	printf("Result: %s\n%i\n", destination, len);
	return (0);

}*/
