/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:46:11 by danalvar          #+#    #+#             */
/*   Updated: 2024/10/28 20:44:15 by danalvar         ###   ########.fr       */
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
	unsigned int	destlen;
	unsigned int	srclen;

	srclen = ft_strlen(src);
	destlen = 0;
	if (destlen >= size)
	{
		return (size + srclen);
	}
	while (dest[destlen] != '\0' && destlen < size)
		destlen++;
	i = 0;
	while (i < srclen && destlen + i + 1 < size)
	{
		dest[i + destlen] = src[i];
		i++;
	}
	dest[i + srclen] = '\0';
	return (srclen + destlen);
}

/*
Si dest es = o mayor que size, devuelve tamano esperado
Para ver donde se trunco srclen + destlen - size + srclen

Concatena src a dest asegurando no exceder limite
devuelve tamano cadena completa

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	source[] = "Hola%w Pepsicola";
	char	destination[11] = "Adios";
	
	printf("DESTINO: %s\nORIGEN:  %s\n", destination, source);
	int	len = ft_strlcat(destination, source, 22);

	printf("Result: %s\n%i\n", destination, len);
	return (0);

}*/
