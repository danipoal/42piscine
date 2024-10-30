/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:18:33 by danalvar          #+#    #+#             */
/*   Updated: 2024/10/28 20:04:59 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (s1[i] != '\0' || s2[i] != '\0')
	{
		while (i < n)
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
	int	n;
	char*	s1 = "aaaa";
	char*	s2 = "aa";
	
	n = 3;
	custom = ft_strncmp(s1, s2, 3);
	original = strncmp(s1, s2, 3);
	printf("Custom %i\n", custom);
	printf("Original %i\n", original);
	
		return (0);
	}*/
