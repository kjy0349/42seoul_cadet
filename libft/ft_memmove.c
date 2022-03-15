/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeykim <jeykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:09:14 by jeykim            #+#    #+#             */
/*   Updated: 2022/03/15 15:43:05 by jeykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;
	unsigned char	temp[100];

	i = 0;
	while (i < len && ((unsigned char *)src)[i] != '\0')
	{
		temp[i] = ((unsigned char *)src)[i];
		i++;
	}
	i = 0;
	while (i < len && ((unsigned char *)src)[i] != '\0')
	{
		((unsigned char *)dst)[i] = temp[i];
		i++;
	}
	return (dst);
}
