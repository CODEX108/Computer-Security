#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *left,*right;
};

struct node *create()  //since function is returning pointer to node.
{
    int x; //local variables so copy will be created
    struct node *newnode;
    newnode=(struct node*) malloc (sizeof(struct node));
    printf ("Enter the data (-1 for no node) : \n");
    scanf ("%d",&x);
    if (x==-1)   //base cond for recursion
    {
        return 0;
    }
    newnode->data=x;
    printf("Enter left child of %d\n",x);
    newnode->left=create ();
    printf("Enter right child of %d\n",x);
    newnode->right=create();
    return newnode;
}

int main()
{
  struct node *root;
  root = 0;
  root = create();

}