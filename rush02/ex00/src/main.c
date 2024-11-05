/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agulanus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 14:43:26 by agulanus          #+#    #+#             */
/*   Updated: 2024/11/05 15:31:46 by agulanus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush02.h"

bool	ft_handle_head(t_dictionary **head, char *file)
{
	if (check_input(file))
	{
		*head = create_dictionary(file);
		if (!(*head))
		{
			clear_dict_list(head);
			return (false);
		}
	}
	return (true);
}

int	main(int argc, char **argv)
{
	char			*file;
	t_dictionary	*head;

	head = NULL;
	if (argc < 2 || argc > 3)
		return (print_error());
	if (argc == 2)
		file = get_dictionary("numbers.dict");
	if (argc == 3)
		file = get_dictionary(argv[2]);
	if (!file || !check_number(argv[argc - 1]))
		return (print_error());
	if (!ft_handle_head(&head, file))
		return (print_error());
	if (!ft_handle_numbers(&head, argv[argc - 1]))
	{
		clear_dict_list(&head);
		return (print_dict_error());
	}
	clear_dict_list(&head);
	free(file);
	return (0);
}
