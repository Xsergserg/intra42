#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	int i;
	t_list *ptr;

	ptr = begin_list;
	i=0;
	while (ptr)
	{
		if (i + 1 == nbr)
			return(ptr);
		ptr = ptr->next;
		i++;
	}
	return(NULL);
}