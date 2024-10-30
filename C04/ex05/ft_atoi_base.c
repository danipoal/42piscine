/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:21:25 by danalvar          #+#    #+#             */
/*   Updated: 2024/10/29 17:25:07 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	contador;

	contador = 0;
	while (str[contador] != '\0')
		contador++;
	return (contador);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ft_strlen(base) == 0 || ft_strlen(base) == 1)
		return (1);
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j] || base[i] == '-'
				|| base[i] == '+')
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{

}

int	main(int argsc, char *argsv[])
{
	int	n;

	if (argsc != 3)
	{
		printf("Introduce parametros\n");
		return (1);
	}
	ft_putnbr_base(argsv[2], argsv[3]);
	return (0);
}

