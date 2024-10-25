/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:41:02 by danalvar          #+#    #+#             */
/*   Updated: 2024/10/23 20:01:39 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_char_is_printable(char str)
{
	int	isprint;

	isprint = 1;
	if (str > 126 || str < 32)
		isprint = 0;
	return (isprint);
}

char	*dec_to_hex(int decimal)
{
	int	cociente;
	int	res;
	char	hex[2];
	
	cociente = decimal;
	while(cociente >= 16)
	{
		//Hacer el pop al principio de la pila y mover el primero al segundo
		if(hex[1] == NULL && hex[0] != NULL)
		{
			hex[1] = hex[0];
		}
		res = cociente % 16;
		cociente = cociente / 16;
		
		if(res <= 0 && res < 10)
			hex[0] = res + '0'; //Pasar de int a char
		else if(res == 10))
			hex[0] = A;
		else if(res == 11)
			B;
		else if(res == 12)
			C;
		else if(res == 13)
			D;
		else if(res == 14)
			E;
		else if(res == 15)
			F;
		or >10 + 55 = ASCII
			
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if(ft_char_is_printable(str[i]) == 0)
		{
			
		}
		i++;
	}
}

}

int	main(void)
{
	char str[] = "fwefqwf";
	str[2] = 22;
	ft_putstr_non_printable();
}
