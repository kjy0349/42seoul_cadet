/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeykim <jeykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:04:01 by jeykim            #+#    #+#             */
/*   Updated: 2022/03/15 15:31:39 by jeykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	char	*return_ptr;

	ptr = (char *)s;
	return_ptr = 0x00;
	if (c == 0x00)
		return (return_ptr);
	while (*ptr != '\0')
	{
		if (*ptr == c)
			return_ptr = ptr;
		ptr++;
	}
	return (return_ptr);
}
