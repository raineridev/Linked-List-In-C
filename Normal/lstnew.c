#include "n_lst.h"

n_list  *lstnew(void *content)
{
    n_list *node;

    node = malloc(sizeof(n_list));
    if(!node || !content)
        return (NULL);

    node->content = content;
    node->next = NULL;
}