/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_custom_strncpy.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 20:11:08 by danalvar          #+#    #+#             */
/*   Updated: 2024/11/03 20:16:42 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	@params len - 	The nbr of chars that you want to copy
 *	@params size - 	The size of the dest
 */
char	*ft_custom_strncpy(char *dest, char *src, int len, int size)
{
	int	i;

	i = 0;
	while (i < len && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
