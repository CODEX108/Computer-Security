#include <stdio.h>
#define N 5
int queue [N];
int front=-1;   //-1 means queue is empty
int rear=-1;

void enqueue(int x)
{
  if(rear==N-1)
  printf ("Overflow!!");
  else if (front==-1 && rear==-1)
  {
      front==rear==0;
      queue[rear]=x;
  }

  else 
  {
      rear++;
      queue[rear]=x;
  }

}

void dequeue()
{
   if (front==-1 && rear==-1)
  {
      printf ("Underflow!!\n");
  } 
else if (front==rear)
{
    front=rear=-1;
}
else 
{
    printf("The dequeued from the queue is: %d\n",queue[front]);
    front++;
}

}

void display()
{
    int i;
    if (front==-1 && rear==-1)
    {
        printf("Queue is empty");
    }
    else{
        printf("The queue is:");
        for(i=front;i<rear+1;i++)
        {
            printf("%d\t",queue[i]);
        }
    }
}

int main()
{
    enqueue(2);
    enqueue(5);
    enqueue(-1);
    display ();
    dequeue();
    display ();
    return 0;
}