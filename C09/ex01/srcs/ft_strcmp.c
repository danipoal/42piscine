/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:18:33 by danalvar          #+#    #+#             */
/*   Updated: 2024/10/28 19:57:18 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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
	int	len1;
	int	len2;

	i = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (s1[i] != '\0' || s2[i] != '\0')
	{
		while (i < len1 || i < len2)
		{
			if (s1[i] != s2[i])
				return (s1[i] - s2[i]);
			i++;
		}
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	custom;
	int	original;
	char*	s1 = "dsf";
	char*	s2 = "sad";

	custom = ft_strcmp(s1, s2);
	original = strcmp(s1, s2);
	printf("Custom %i\n", custom);
	printf("Original %i\n", original);
	
	return (0);
}*/