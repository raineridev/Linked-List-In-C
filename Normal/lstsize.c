#include "n_lst.h"

int lstsize(n_list *lst)
{
	int	i;

	i = 0;
    if(!lst)
        return (-1);
	while(lst->next)
	{
		lst = lst->next;
		i++;
	}
    return (i);
}