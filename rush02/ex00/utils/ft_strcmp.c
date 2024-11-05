/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:20:53 by dagredan          #+#    #+#             */
/*   Updated: 2024/11/03 22:40:08 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Usage: ./a.out <str1> <str2>");
		return (1);
	}
	printf("%d\n", ft_strcmp(argv[1], argv[2]));
}
*/
