#include "n_lst.h"

void lstadd_back(n_list **head, n_list *node)
{
    n_list  *list;
    
    if(!*head)
    {
        head = node;
        return ;
    }
    if(!node)
        return ; 

    list = *head;

    while(list->next)
        list = list->next;
    list->next = node;
    node->next = NULL;
}