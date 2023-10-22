#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;              //Data of the node
    struct node *nextptr; //Address of the next node
} * start, *fnNode, *prevptr, *tmp;

void createNodeList(int n); // function to create the list
void displayList();         // function to display the list
void Delete_from_end();

int main()
{
    int n, num;
    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    createNodeList(n);
    printf("\n Data entered in the list are : \n");
    displayList();
    Delete_from_end();
    printf("\n Data after inserted in the list are : \n");
    displayList();
    return 0;
}

void createNodeList(int n)
{

    int num, i;
    start = (struct node *)malloc(sizeof(struct node));
    start = (struct node *)malloc(sizeof(struct node));
    if (start == NULL) //check whether the start is NULL and if so no memory allocation
    {
        printf(" Memory can not be allocated.");
    }
    else
    {
        printf(" Input data for node 1 : ");
        scanf("%d", &num);
        start->num = num;
        start->nextptr = NULL; // links the address field to NULL
        tmp = start;
        // Creating n nodes and adding to linked list
        for (i = 2; i <= n; i++)
        {
            fnNode = (struct node *)malloc(sizeof(struct node));
            if (fnNode == NULL) //check whether the fnnode is NULL and if so no memory allocation
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for node %d : ", i);
                scanf(" %d", &num);
                fnNode->num = num;      // links the num field of fnNode with num
                fnNode->nextptr = NULL; // links the address field of fnNode with NULL

                tmp->nextptr = fnNode; // links previous node i.e. tmp to the fnNode
                tmp = tmp->nextptr;    //now it starts pointing to tht second node
            }
        }
    }
}

void displayList()
{
    struct node *tmp;
    if (start == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        tmp = start;
        while (tmp != NULL)
        {
            printf(" Data = %d\n", tmp->num); // prints the data of current node
            tmp = tmp->nextptr;               // advances the position of current node
        }
    }
}

void Delete_from_end()
{
    struct node *prevptr;
    if (start == NULL)
    {
        printf(" There is no element in the list.");
    }
    else
    {
        tmp = start;
        prevptr = start;
        tmp = start;
        while (tmp->nextptr != NULL) //300
        {
            prevptr = tmp; //pre=200 coz temp value was 200 first
            tmp = tmp->nextptr;
        }
        if (tmp == start)
        {
            start = NULL;
        }
        else
        {
            prevptr->nextptr == NULL;
        }

        free(tmp);
    }
}
