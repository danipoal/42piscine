/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 16:38:33 by dagredan          #+#    #+#             */
/*   Updated: 2024/11/03 23:00:04 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
# include <fcntl.h>

typedef struct s_dictionary
{
	char				*key;
	char				*value;
	struct s_dictionary	*next;
}	t_dictionary;

int				print_error(void);
int				print_dict_error(void);
int				ft_strcmp(char *s1, char *s2);
int				ft_strlen(char *str);
char			*ft_strndup(char *str, int n);
char			*ft_strdup(char *str);
char			*ft_strjoin(char *s1, char *s2);
t_dictionary	*create_dictionary(char *str);
char			*get_dictionary(char *filename);
t_dictionary	*new_dict_node(char *key, char *value);
void			add_dict_node(t_dictionary **head, t_dictionary *node);
void			clear_dict_list(t_dictionary **head);
bool			ft_handle_numbers(t_dictionary **head, char *number);
bool			ft_handle_tens(t_dictionary **head, char *number, int index);
bool			ft_handle_thousands(t_dictionary **head, char *number, int i);
bool			ft_print_value(t_dictionary **head, char *key);
int				ft_is_printable(char str);
int				ft_is_numeric(char str);
int				ft_isspace(char c);
int				ft_linelen(char *str);
bool			check_input(char *str);
char			*ft_custom_strncpy(char *dest, char *src, int len, int size);
void			fill_dict(char **dict);
bool			check_number(char *nchar);

#endif
