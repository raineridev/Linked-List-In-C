#include "n_lst.h"


// // Create
// int main(void)
// {
//     n_list *head = lstnew("Node #1");
//     n_list *node1 = lstnew("Node #1");
//     n_list *node2 = lstnew("Node #2");
//     n_list *node3 = lstnew("Node #3");
//     n_list *node4 = lstnew("Node #4");
//     n_list *node5 = lstnew("Node #5");
//     n_list *node6 = lstnew("Node #6");
//     n_list *node7 = lstnew("Node #7");
//     n_list *node8 = lstnew("Node #8");
//     n_list *node9 = lstnew("Node #9");
//     n_list *node10 = lstnew("Node #10");
//     return (0);
// }

// Add Back
// int main(void)
// {
//     n_list *head = lstnew("Node #1");
//     n_list *node1 = lstnew("Node #1");
//     n_list *node2 = lstnew("Node #2");
//     n_list *node3 = lstnew("Node #3");
//     n_list *node4 = lstnew("Node #4");
//     n_list *node5 = lstnew("Node #5");
//     n_list *node6 = lstnew("Node #6");
//     n_list *node7 = lstnew("Node #7");
//     n_list *node8 = lstnew("Node #8");
//     n_list *node9 = lstnew("Node #9");
//     n_list *node10 = lstnew("Node #10");
//     lstadd_back(&head, node1);
//     lstadd_back(&head, node2);
//     lstadd_back(&head, node3);
//     lstadd_back(&head, node4);
//     lstadd_back(&head, node5);
//     lstadd_back(&head, node6);
//     lstadd_back(&head, node7);
//     lstadd_back(&head, node8);
//     lstadd_back(&head, node9);
//     lstadd_back(&head, node10);
//     printf("%s", head->next->content);
//     return (0);
// }

// Count Nodes
int main(void)
{
    int size;
    n_list *head = lstnew("Node #1");
    n_list *node1 = lstnew("Node #1");
    n_list *node2 = lstnew("Node #2");
    n_list *node3 = lstnew("Node #3");
    n_list *node4 = lstnew("Node #4");
    n_list *node5 = lstnew("Node #5");
    n_list *node6 = lstnew("Node #6");
    n_list *node7 = lstnew("Node #7");
    n_list *node8 = lstnew("Node #8");
    n_list *node9 = lstnew("Node #9");
    n_list *node10 = lstnew("Node #10");
    lstadd_back(&head, node1);
    lstadd_back(&head, node2);
    lstadd_back(&head, node3);
    lstadd_back(&head, node4);
    lstadd_back(&head, node5);
    lstadd_back(&head, node6);
    lstadd_back(&head, node7);
    lstadd_back(&head, node8);
    lstadd_back(&head, node9);
    lstadd_back(&head, node10);
    size = lstsize(head);
    printf("%d\n", size); // 10
    return (0);
}