#include <stdio.h>
#include <stdlib.h>
struct node *tmp;


struct node
{
    int num;              //data of the node
    struct node *nextptr; //address of the next node
} * start;

void createNodeList(int n); //function to create the nodes in the list
void NodeInsertion_position(int data);
void displayList();

void createNodeList(int n)
{
    struct node *fnNode;
    int data, i;
    start = (struct node *)malloc(sizeof(struct node));
    printf("Input Data for node 1: ");
    scanf("%d", &data);
    start->num = data;
    start->nextptr = NULL;
    tmp = start;

    for (i = 2; i <= n; i++)
    {
        fnNode = (struct node *)malloc(sizeof(struct node));

        printf("Input data for node %d: ", i);
        scanf("%d", &data);
        fnNode->num = data;
        fnNode->nextptr = NULL;

        tmp->nextptr = fnNode;
        tmp = tmp->nextptr; //now it starts pointing to tht second node
    }
}

void NodeInsertion_position(int data)
{
    struct node *fnNode;
    int i=1;
    int count;

    int pos;
    printf("\nEnter the position at which the number is to be inserted\n");
    scanf("%d", pos);
 
    if (pos>count)
    {
        printf("You have entered an invalid position");
    }
    else
    {
        tmp = start;
        while (i < pos)
        {
            tmp = tmp->nextptr;
            i++;
        }
        fnNode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data");
        scanf("%d", &fnNode->num);
        fnNode->nextptr = tmp->nextptr;
        tmp->nextptr = fnNode;
    }

}
    
void displayList(){
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


int main()
{
    int n, data;
    struct node *tmp;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    createNodeList(n);
    NodeInsertion_position(data);
    displayList();

    return 0;
}


