#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr);

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

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*begin_list;
	t_list	*ptr;
	int		i;

	if (ac == 1)
		return (0);
	begin_list = ft_create_elem(av[1]);
	ptr = begin_list;
	i = 2;
	while (ac > 1)
	{
		ptr = ft_create_elem(av[i]);
		ptr->next = begin_list;
		begin_list = ptr;
		ac--;
		i++;
	}
	return (ptr);
}

int main(int argc, char **argv)
{
	t_list *list;
	t_list *begin_list;

	list = ft_list_push_params(argc, argv);
	begin_list = list;

//	while (list)
//	{
//		printf("%s\n", list->data);
//		list = list->next;
//	};
//	list = begin_list;

	printf("%s\n", ft_list_at(list, 2)->data);

//	ft_list_clear(list);
//	while (list)
//	{
//		printf("%s\n", list->data);
//		list = list->next;
//	};
	return (0);
}
