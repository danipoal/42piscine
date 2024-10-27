/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:18:05 by danalvar          #+#    #+#             */
/*   Updated: 2024/10/26 11:18:14 by danalvar         ###   ########.fr       */
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

void	*ft_print_memory(void *addr, unsigned int size)
{
// Imprimir 3 columnas:
	//Direccion hex del primer char
	//Contenido en hex con espacio cada 2 chars 
	//Contenido en char imprimibles, si no es impri = .
//Lineas de 16 char
// size = 0 no muestra nada

	unsigned int	count;
//	char	*addrc;

	count = size; //eliminar	
	write(1, "Memory space : ", 15);
	count = 0;
	/*while (count < size)           //EN ESTE BUCLE NO DUMPEA
	{
		addrc = (char *) addr;
		dec_to_hex(*addrc);
		if(count % 2 == 0 && count != 0)
			write(1, "\n", 1);
		count++;
		addr++;
	}*/

	return (addr);
}

void	convnoprint(char *str)
{    //NO INCLUIR EN TAREA     - ESTA FUNCION DUMPEA

	while (*str != '\0')
	{
		if(*str == '-')
			*str = 27; //1b
		str++;
		
	}

}

int	main(void)
{
	char 	*a2 = "Bonjour les amin";
	char 	*a3 = "ches---c- est fo";
	char 	*a4 = "u-tout-ce qu on ";
	char 	*a5 = "peut faire avec-";
	char 	*a6 = "--lol-lol-  -   ";
	
	//Convertimos los '-' en str = 27
//	convnoprint(a2);
//	convnoprint(a3);
//	convnoprint(a4);
//	convnoprint(a5);
//	convnoprint(a6);

	//Printeamos memoria, etc
	ft_print_memory(a2, 16);
	ft_print_memory(a3, 16);
	ft_print_memory(a4, 16);
	ft_print_memory(a5, 16);
	ft_print_memory(a6, 16);

	return (0);
}
