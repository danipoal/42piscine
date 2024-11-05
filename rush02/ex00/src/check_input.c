/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 14:49:34 by danalvar          #+#    #+#             */
/*   Updated: 2024/11/03 21:06:51 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush02.h"

/*
 *	Checks every line individualy to fit conditions
 *	[nbr][0 to n spaces]:[0 to n spaces][n chars printables]
 */
bool	check_line(char *line)
{
	int	i;

	i = 0;
	if (line[i] == '\n')
		return (true);
	while (ft_is_numeric(line[i]))
		i++;
	if (i == 0)
		return (false);
	while (ft_isspace(line[i]))
		i++;
	if (line[i] != ':')
		return (false);
	i++;
	while (ft_isspace(line[i]))
		i++;
	while (line[i] != '\0' && line[i] != '\n')
	{
		if (!(ft_is_printable(line[i])))
			return (false);
		i++;
	}
	return (true);
}

/*
 *	Compare Keys with dict Keys
 *	Len max value is undecillion with 39 + null
 *	Second while -> cpy the number and fill else with '\0'
 *	Last while   -> If the key is contained, put a '-'
 */
void	check_keys(char **dict, char *line)
{
	int		i;
	char	key[40];

	i = 0;
	if (line[i] == '\n')
		return ;
	while (ft_is_numeric(line[i]) == 1)
		i++;
	ft_custom_strncpy(key, line, i, 40);
	i = 0;
	while (i < 41)
	{
		if (ft_strcmp(dict[i], key) == 0)
			dict[i] = "-";
		i++;
	}
}

bool	are_all_keys(char **dict)
{
	int	i;

	i = 0;
	while (i < 41)
	{
		if (*dict[i] != '-')
			return (false);
		i++;
	}
	return (true);
}

/*
 *	Iterate lines and set the pointer to every next line
 *	Iterate again to check the mandatory dictionary keys
 *	If everything in dict is '-' is that all mandarory are IN
 */
bool	check_input(char *buffer)
{
	char	*dict[41];
	char	*current;

	current = buffer;
	while (*current)
	{
		if (!(check_line(current)))
			return (false);
		current = current + ft_linelen(current);
	}
	fill_dict(dict);
	current = buffer;
	while (*current)
	{
		check_keys(dict, current);
		current = current + ft_linelen(current);
	}
	if (!(are_all_keys(dict)))
		return (false);
	return (true);
}
