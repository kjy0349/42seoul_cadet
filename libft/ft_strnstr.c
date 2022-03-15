/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeykim <jeykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:24:41 by jeykim            #+#    #+#             */
/*   Updated: 2022/03/15 15:22:12 by jeykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	static unsigned int	i;
	static unsigned int	j;

	if (*needle == '\0')
		return ((char *)haystack);
	while (i < len)
	{
		if (needle[j] == '\0')
		{
			return (&((char *)haystack)[i - j]);
		}
		else if (haystack[i] == needle[j])
		{
			j++;
		}
		else
			j = 0;
		i++;
	}
	return (0x00);
}
