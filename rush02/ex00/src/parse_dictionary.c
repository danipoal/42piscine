/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dictionary.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agulanus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 16:45:31 by agulanus          #+#    #+#             */
/*   Updated: 2024/11/03 22:45:19 by agulanus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush02.h"

t_dictionary	*free_key_value(char *key, char *value)
{
	free(key);
	free(value);
	return (NULL);
}

static t_dictionary	*create_node(char **str)
{
	int				len;
	char			*key;
	char			*value;
	t_dictionary	*node;

	len = 0;
	while ((*str)[len] >= '0' && (*str)[len] <= '9')
		len++;
	key = ft_strndup(*str, len);
	*str += len;
	if (!key)
		return (NULL);
	while (**str == ' ' || **str == ':')
		(*str)++;
	len = 0;
	while ((*str)[len] >= 32 && (*str)[len] <= 126)
		len++;
	value = ft_strndup(*str, len);
	*str += len;
	if (!value)
		return (free_key_value(key, value));
	node = new_dict_node(key, value);
	if (!node)
		return (free_key_value(key, value));
	return (node);
}

/*
 *	Create a dictionary from string passed as argument.
 *	The string must to be checked before call this function.
 */
t_dictionary	*create_dictionary(char *str)
{
	t_dictionary	*head;
	t_dictionary	*node;

	if (!str)
		return (NULL);
	head = NULL;
	while (*str)
	{
		while (*str == '\n')
			str++;
		if (*str)
		{
			node = create_node(&str);
			if (!node)
			{
				clear_dict_list(&head);
				return (NULL);
			}
			add_dict_node(&head, node);
		}
	}
	return (head);
}
