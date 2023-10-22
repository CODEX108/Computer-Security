/**
 * C program to delete middle node of Singly Linked List
 */

#include <stdio.h>
#include <stdlib.h>


/* Structure of a node */
struct node {
    int data;          // Data 
    struct node *next; // Address 
} *head;


/* Functions used in program */
void createList(int n);
void deleteMiddleNode(int position);
void displayList();


int main()
{
    int n, position;

    /*
     * Create a singly linked list of n nodes
     */
    printf("Enter the total number of nodes: ");
    scanf("%d", &n);
    createList(n);

    printf("\nData in the list \n");
    displayList();

    printf("\nEnter the node position you want to delete: ");
    scanf("%d", &position);

    /* Delete middle node from list */
    deleteMiddleNode(position);

    printf("\nData in the list \n");
    displayList();

    return 0;
}


/*
 * Create a list of n nodes
 */
void createList(int n)
{
    struct node *newNode, *temp;
    int data, i;

    head = (struct node *)malloc(sizeof(struct node));

    /*
     * If unable to allocate memory for head node
     */
    if(head == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        /*
         * Read data of node from the user
         */
        printf("Enter the data of node 1: ");
        scanf("%d", &data);

        head->data = data; // Link the data field with data
        head->next = NULL; // Link the address field to NULL

        temp = head;

        /*
         * Create n nodes and adds to linked list
         */
        for(i=2; i<=n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));

            /* If memory is not allocated for newNode */
            if(newNode == NULL)
            {
                printf("Unable to allocate memory.");
                break;
            }
            else
            {
                printf("Enter the data of node %d: ", i);
                scanf("%d", &data);

                newNode->data = data; // Link the data field of newNode with data
                newNode->next = NULL; // Link the address field of newNode with NULL

                temp->next = newNode; // Link previous node i.e. temp to the newNode
                temp = temp->next;
            }
        }

        printf("SINGLY LINKED LIST CREATED SUCCESSFULLY\n");
    }
}



/*
 * Delete middle node of the linked list
 */
void deleteMiddleNode(int position)
{
    int i;
    struct node *toDelete, *prevNode;

    if(head == NULL)
    {
        printf("List is already empty.");
    }
    else
    {
        toDelete = head;
        prevNode = head;

        for(i=2; i<=position; i++)
        {
            prevNode = toDelete;
            toDelete = toDelete->next;

            if(toDelete == NULL)
                break;
        }

        if(toDelete != NULL)
        {
            if(toDelete == head)
                head = head->next;

            prevNode->next = toDelete->next;
            toDelete->next = NULL;

            /* Delete nth node */
            free(toDelete);

            printf("SUCCESSFULLY DELETED NODE FROM MIDDLE OF LIST\n");
        }
        else
        {
            printf("Invalid position unable to delete.");
        }
    }
}


/*
 * Display entire list
 */
void displayList()
{
    struct node *temp;

    /*
     * If the list is empty i.e. head = NULL
     */
    if(head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            printf("Data = %d\n", temp->data); // Print the data of current node
            temp = temp->next;                 // Move to next node
        }
    }
}








// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int data;
//     struct node *next;
// };
// struct node *head, *temp;


// int main()
// {

//     int n, data, pos;
//     printf("\n\n Linked List : Delete the last node of Singly Linked List :\n");
//     printf("---------------------------------------------------------------\n");

//     printf(" Input the number of nodes : ");
//     scanf("%d", &n);
//     createNodeList(n);
//     printf("\n Data entered in the list are : \n");
//     displayList();
//   struct node *nextnode;
//     int pos, i = 1;
//     temp = head;
//     printf("Enter the position");
//     scanf("%d", pos);
//     while (i < pos - 1)
//     {
//         temp = temp->next;
//         i++;
//     }

//     nextnode = temp->next;
//     temp->next = nextnode->next;
//     free(nextnode);
//     printf("\n The new list after deletion the last node are  : \n");
//     head = (struct node *)malloc(sizeof(struct node));
//     if (head == NULL) //check whether the stnode is NULL and if so no memory allocation
//     {
//         printf(" Memory can not be allocated.");
//     }
//     else
//     {
//         // reads data for the node through keyboard
//         printf(" Input data for node 1 : ");
//         scanf("%d", &data);

//         head->data = data;
//         head->next = NULL; //Links the address field to NULL
//         temp = head;
//     }

//         //Creates n nodes and adds to linked list
//         for (i = 2; i <= n; i++)
//         {
//             nextnode = (struct node *)malloc(sizeof(struct node));
//             if (nextnode == NULL) //check whether the fnnode is NULL and if so no memory allocation
//             {
//                 printf(" Memory can not be allocated.");
//                 break;
//             }
//             else
//             {
//                 printf(" Input data for node %d : ", i);
//                 scanf(" %d", &data);
//                 nextnode->data = data; // links the num field of fnNode with num
//                 nextnode->next = NULL; // links the address field of fnNode with NULL
//                 temp->next = nextnode; // links previous node i.e. tmp to the fnNode
//                 temp = temp->next;
//             }
//         }
   
//     struct node *tmep;
//     if (head == NULL)
//     {
//         printf(" No data found in the empty list.");
//     }
//     else
//     {
//         temp = head;
//         while (temp != NULL)
//         {
//             printf(" Data = %d\n", temp->data); // prints the data of current node
//             temp = tmep->next;                  // advances the position of current node
//         }
//     }
//     return 0;
// }
    
 

    

    

