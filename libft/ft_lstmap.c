/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeykim <jeykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 19:26:56 by jeykim            #+#    #+#             */
/*   Updated: 2022/03/31 13:42:52 by jeykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;

	if (!lst)
		return (NULL);
	while (lst)
	{
		ptr = (t_list *)malloc(sizeof(t_list));
		if (!ptr)
			ft_lstclear();
		lst = lst->next;
	}
}
