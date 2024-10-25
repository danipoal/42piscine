/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 22:02:46 by danalvar          #+#    #+#             */
/*   Updated: 2024/10/24 22:24:35 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

char	*ft_strcat(char *dest, char *src)
{
	int	final;
	
	printf("%s\n", dest);
	final = ft_strlen(dest);
	char *a  = dest + final;
	a = src;
	
	return (dest);
}

int	main(void)
{	
	char	source[] = "Hola%w Pepsicola";

	char	destination[50];

	ft_strcat(source, destination);

	printf("%s-\n", destination);
	return (0);
}
