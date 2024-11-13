/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 21:54:14 by danalvar          #+#    #+#             */
/*   Updated: 2024/10/29 22:03:56 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_isspace(char l)
{
    if (l == ' ' || l == '\f' || l == '\n' || l == '\r' || l == '\t'
        || l == '\v')
        return (1);
    return (0);
}

int count_words(char *str)
{
    int i;
    int words;

    words = 0;
    i = 0;    
    while (str[i] != '\0')
    {
        if (ft_isspace(str[i]) == 0 && (ft_isspace(str[i + 1]) == 1 || str[i + 1] == '\0'))
            words++;
        i++;
    }
    return (words);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (ft_isspace(str[i] == 0) && str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*dest;

	len = ft_strlen(src);
	dest = (char *) malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char    **ft_split(char *str)
{
    char    **arr;
    int words;
    int i;
    int len;

    words = count_words(str);
    arr = (char **) malloc((words + 1) * sizeof(char *));
    if (arr == NULL)
        return (NULL);
    i = 0;
    while (i <= words && *str != '\0')
    {
        while (ft_isspace(*str) == 1)
            str++;
        len = ft_strlen(str);
        arr[i] = ft_strdup(str);
        if (arr[i] == NULL)
            return (NULL);
        i++;
        str = str + len;
    }
    arr[i] = NULL;
    return (arr);
}

#include <stdio.h>

int main(void)
{
    int i;
    char    **array;
    char str[] = "Hola pepsicola cara";

    i = 0;
    array = ft_split(str);
    while (array[i] != NULL)
    {
        printf("%s\n", array[i]);
        i++;
    }
    return (0);
}