/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeyoung <jeyoung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:05:18 by jeykim            #+#    #+#             */
/*   Updated: 2022/03/16 19:31:18 by jeyoung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	char			*return_ptr;
	char			*ptr;

	i = 0;
	ptr = (char *)s;
	return_ptr = 0x00;
	while (i < n)
	{
		if (*ptr == c)
		{
			return_ptr = ptr;
			break ;
		}
		ptr++;
		i++;
	}
	return (return_ptr);
}