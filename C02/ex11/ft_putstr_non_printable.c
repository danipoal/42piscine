/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:41:02 by danalvar          #+#    #+#             */
/*   Updated: 2024/10/24 18:16:37 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_char_is_printable(char str)
{
	int	isprint;

	isprint = 1;
	if (str > 126 || str < 32)
		isprint = 0;
	return (isprint);
}

void	dec_to_hex(char decimal)
{
	int		quot;
	int		res;
	int		i;
	char	hex[3];

	i = 0;
	quot = decimal;
	while (i < 2)
	{
		res = quot % 16;
		quot = quot / 16;
		if (res >= 0 && res < 10)
		{
			hex[i] = res + '0';
		}
		else if (res > 9 && res < 16)
		{
			hex[i] = res - 10 + 'a';
		}
		i++;
	}
	write(1, &hex[1], 1);
	write(1, &hex[0], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_char_is_printable(str[i]) == 0)
		{
			write(1, "\\", 1);
			dec_to_hex(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

/*int	main(void)
{
	char	str[] = "gggg";
	str[2] = 28;
	ft_putstr_non_printable(str);
}*/
