/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:23:16 by dagredan          #+#    #+#             */
/*   Updated: 2024/10/23 18:17:38 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	char	dest[1000];
	
	if (argc != 2)
		return(0);
	ft_strcpy(dest, argv[1]);
	printf("src:  %s\n", argv[1]);
	printf("dest: %s\n", dest);
}
*/
