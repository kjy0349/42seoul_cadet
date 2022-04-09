#include "libft.h"
#include <stdio.h>

typedef struct test_list{
	int value;
	tt_list *next;
} tt_list;

void	f(tt_list *lst)
{
	lst->value = lst->value * 2;
}

tt_list	*lst_new(int value)
{
	tt_list *lst = (tt_list *)malloc(sizeof(tt_list));

	lst->value = value;
	lst->next = NULL;
	return (lst);
}

int	main()
{
	tt_list *first = lst_new(0);
	tt_list **head = &first;
	int	arr[] = {1, 2, 3, 4, 5};
	int i = 0;
	while (i < 5)
	{
		first->next = lst_new(arr[i]);
		first = first->next;
		i++;
	}
	first->next = 0;
	i = 0;
	while (!head[i])
	{
		printf("%d\n", head[i]->value);
		i++;
	}
}
