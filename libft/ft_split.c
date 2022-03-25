/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeykim <jeykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 17:33:46 by jeykim            #+#    #+#             */
/*   Updated: 2022/03/22 18:37:58 by jeykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_spcount(char const *s, char c)
{
	int	i;
	int	sp_count;

	i = 0;
	sp_count = 1;
	while (s[i] != '\0')
	{
		if (c == s[i])
		{
			while (s[i] == c)
				i++;
			sp_count++;
		}
		else
			i++;
	}
	return (sp_count);
}

char	**ft_split(char const *s, char c)
{
	char			**ptr;
	static int		i;
	int				length;
	int				j;

	if (!s)
		return (NULL);
	ptr = (char **)malloc(sizeof(char *) * get_spcount(s, c));
	if (!ptr)
		return (NULL);
	while (ptr)
	{
		length = 0;
		while (s[i++] != c)
			length++;
		j = 0;
		*ptr = (char *)malloc(sizeof(char) * length);
		while (j < length)
		{
			*ptr[j] = *s;
			s++;
			j++;
		}
		while (s[i++] == c)
		ptr++;
	}
}
