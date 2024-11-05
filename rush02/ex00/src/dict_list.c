/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agulanus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:19:45 by agulanus          #+#    #+#             */
/*   Updated: 2024/11/03 23:22:09 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush02.h"

/*
 *	Create node of dictionary list.
 */
t_dictionary	*new_dict_node(char *key, char *value)
{
	t_dictionary	*node;

	node = (t_dictionary *)malloc(sizeof(t_dictionary));
	if (!node)
		return (NULL);
	node->key = key;
	node->value = value;
	node->next = NULL;
	return (node);
}

/*
 *	Add created node to the dictionary list.
 */
void	add_dict_node(t_dictionary **head, t_dictionary *node)
{
	t_dictionary	*current;

	if (*head)
	{
		current = *head;
		while (current->next)
			current = current->next;
		current->next = node;
	}
	else
		*head = node;
}

/*
 *	Delete all nodes from dictionary list.
 */
void	clear_dict_list(t_dictionary **head)
{
	t_dictionary	*current;

	if (!head || !*head)
		return ;
	while (*head)
	{
		current = *head;
		free(current->key);
		free(current->value);
		*head = (*head)->next;
		free(current);
	}
}

/*
 *	Print the values of the dictionary if finds key
 */
bool	ft_print_value(t_dictionary **head, char *key)
{
	t_dictionary	*current;

	current = *head;
	while (current)
	{
		if (ft_strcmp(key, current->key) == 0)
		{
			write(1, current->value, ft_strlen(current->value));
			return (true);
		}
		else
			current = current->next;
	}
	return (false);
}
