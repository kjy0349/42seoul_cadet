/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeyoung <jeyoung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 16:57:34 by jeykim            #+#    #+#             */
/*   Updated: 2022/03/16 19:34:08 by jeyoung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	char	*return_ptr;

	ptr = (char *)s;
	return_ptr = 0x00;
	while (*ptr != '\0')
	{
		if (*ptr == c)
		{
			return_ptr = ptr;
			break ;
		}
		ptr++;
	}
	if (c == '\0' && *ptr == '\0')
		return_ptr = ptr;
	return (return_ptr);
}
