#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;
    struct node *nextptr;
};

int main()
{

    struct node *start, *fnNode, *tmp;
    int data, i, n;
    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    start = (struct node *)malloc(sizeof(struct node));
    printf(" Input data for node 1 : ");
    scanf("%d", &data);
    start->num = data;
    start->nextptr = NULL; // links the address field to NULL
    tmp = start;
    // Creating n nodes and adding to linked list
    for (i = 2; i <= n; i++)
    {
        fnNode = (struct node *)malloc(sizeof(struct node));

        printf(" Input data for node %d : ", i);
        scanf(" %d", &data);
        fnNode->num = data;     // links the num field of fnNode with num
        fnNode->nextptr = NULL; // links the address field of fnNode with NULL

        tmp->nextptr = fnNode; // links previous node i.e. tmp to the fnNode
        tmp = tmp->nextptr;    //now it starts pointing to tht second node
    }

    printf("The list before deletion of node is:\n");
    if (start == NULL)
    {
        printf(" List is empty.");
    }
    else
    {

        tmp = start;
        while (tmp != NULL)
        {
            printf("  Data= %d\n", tmp->num); // prints the data of current node
            tmp = tmp->nextptr;               // advances the position of current node
        }
    }

    //deletion process
    tmp = start;
    start = start->nextptr;
    free(tmp);

    if (start == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        printf("\nThe list after deletion of node is:\n");
        tmp = start;
        while (tmp != NULL)
        {
            printf("  Data= %d\n", tmp->num); // prints the data of current node
            tmp = tmp->nextptr;               // advances the position of current node
        }
    }

    return 0;
}
