#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

t_list *ft_list_push_params(int ac, char **av);
t_list *ft_list_clear(t_list *ptr);

t_list	*ft_create_elem(void *data)
{
	t_list *ptr;

	ptr = NULL;
	ptr = malloc(sizeof(t_list));
	if (ptr)
	{
		ptr->data = data;
		ptr->next = NULL;
	}
	return (ptr);
}

int main(int argc, char **argv)
{
	t_list *list;
	t_list *begin_list;

	list = ft_list_push_params(argc, argv);
	begin_list = list;

	while (list)
	{
		printf("%s\n", list->data);
		list = list->next;
	};
	list = begin_list;
//	ft_list_clear(list);
//	while (list)
//	{
//		printf("%s\n", list->data);
//		list = list->next;
//	};
	return (0);
}
