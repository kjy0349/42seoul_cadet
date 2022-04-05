/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeykim <jeykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 17:33:46 by jeykim            #+#    #+#             */
/*   Updated: 2022/04/05 17:21:26 by jeykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	get_spcount(char const *s, char c)
{
	int	sp_count;

	sp_count = 0;
	while (*s != '\0')
	{
		while (*s != c && *s != '\0')
			s++;
		sp_count++;
		while (*s == c && *s != '\0')
			s++;
	}
	return (sp_count);
}

static int	get_str_length(char const *s, char c)
{
	int			i;
	int			length;

	i = 0;
	length = 0;
	while (s[i] != c && s[i] != '\0')
	{
		length++;
		i++;
	}
	return (length);
}

static char const	*make_str(char **ptr, char const *s, int length)
{
	int	j;

	j = 0;
	while (j < length)
	{
		(*ptr)[j] = *s;
		s++;
		j++;
	}
	(*ptr)[j] = '\0';
	return (s);
}

char	**ft_split(char const *s, char c)
{
	char			**ptr;
	int				length;
	int				spcount;
	char			**return_ptr;

	while (*s == c && *s != '\0')
		s++;
	spcount = get_spcount(s, c);
	ptr = (char **)malloc(sizeof(char *) * (spcount + 1));
	if (!ptr)
		return (NULL);
	return_ptr = ptr;
	while (*s)
	{
		length = get_str_length(s, c);
		*ptr = (char *)malloc(sizeof(char) * length + 1);
		if (!ptr)
			return (NULL);
		s = make_str(ptr, s, length);
		while (*s == c && *s != '\0')
			s++;
		ptr++;
	}
	return_ptr[spcount] = 0;
	return (return_ptr);
}
