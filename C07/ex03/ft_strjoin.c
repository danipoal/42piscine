/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:25:18 by danalvar          #+#    #+#             */
/*   Updated: 2024/11/05 19:42:11 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int	get_len(int size, char **strs, char *sep)
{
	int	i;
	int	lentotal;
	int	seplen;

	i = 0;
	lentotal = 0;
	seplen = ft_strlen(sep);
	while (i < size)
	{
		lentotal += ft_strlen(strs[i]) + seplen;
		i++;
	}
	lentotal = lentotal - seplen;
	lentotal ++;
	return (lentotal);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		lentotal;
	char	*str;

	if (size <= 0)
		return ("");
	i = 0;
	lentotal = get_len(size, strs, sep);
	str = (char *) malloc(lentotal * sizeof(char));
	i = 0;
	str[0] = '\0';
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i != size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char	*strs[] = {"Hola que" , "Tal", "estas :)"};
	char	*sep;

	sep = "\n";
	sep = ft_strjoin(2, strs, sep);
	printf("%s\n", sep);
	free(sep);
	return (0);
}*/
