/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 21:54:14 by danalvar          #+#    #+#             */
/*   Updated: 2024/10/29 22:31:08 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
void	put_args()
{

}

int	main(int argc, char *argsv[])
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	while (i < argc)
	{
		j = 0;
		while (j < argc)
		{
			if (ft_strcmp(argsv[i], argsv[j]) > 0 && i <= j)
			{
				tmp = argsv[i];
				argsv[i] = argsv[j];
				argsv[j] = tmp;
			}
			j++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		write(1, argsv[i], ft_strlen(argsv[i]));
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
