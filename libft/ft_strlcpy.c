/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeykim <jeykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:35:05 by jeykim            #+#    #+#             */
/*   Updated: 2022/03/15 15:38:20 by jeykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned char	i;

	i = 0;
	if (dstsize > 0)
	{
		while (*(unsigned char *)dst != '\0' && i < dstsize - 1)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
		((unsigned char *)dst)[i] = '\0';
	}
	return (ft_strlen(src));
}
