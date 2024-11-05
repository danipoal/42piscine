/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agulanus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 10:09:47 by agulanus          #+#    #+#             */
/*   Updated: 2024/11/03 16:12:24 by agulanus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush02.h"

/*
 *	Read file descriptor until end of file and return
 *	its content as string.
 *	
 * 	- If read function fails at any time (with returned value -1)
 *	  the read_dictionary function returns a NULL pointer.
 *
 *	- If ft_strjoin fails the read_dictionary function
 *	  returns a NULL pointer.
 */
static char	*read_dictionary(int fd)
{
	int		read_bytes;
	char	buffer[256 + 1];
	char	*dictionary;
	char	*tmp;

	dictionary = NULL;
	read_bytes = read(fd, &buffer, 256);
	buffer[read_bytes] = '\0';
	while (read_bytes > 0)
	{
		tmp = ft_strjoin(dictionary, buffer);
		free(dictionary);
		if (!tmp)
			return (NULL);
		dictionary = tmp;
		read_bytes = read(fd, buffer, 256);
		buffer[read_bytes] = '\0';
	}
	if (read_bytes < 0)
	{
		free(dictionary);
		return (NULL);
	}
	return (dictionary);
}

/*
 *	Get content as char pointer from the filename passed as argument.
 *
 *	- If file can't be open, returns a NULL pointer.
 *	- If an error occurred when read function tries to read from the
 *	  file descriptor or allocate memory from buffer, get_dictionary
 *	  function will return a NULL pointer.
 *	- If the file descriptor is empty, returns a NULL pointer.
 */

char	*get_dictionary(char *filename)
{
	int		fd;
	char	*dictionary;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (NULL);
	dictionary = read_dictionary(fd);
	close(fd);
	if (!dictionary)
		return (NULL);
	return (dictionary);
}
