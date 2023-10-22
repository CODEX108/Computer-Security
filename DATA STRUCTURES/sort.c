#include<stdio.h>

int linear_search(int arr[],int n,int x)
{
    int i;
    for(i=0;i<=n;i++)
    if (arr[i]==x)
    return i+1;
    
}


int main()
{
    int arr[50],n,i,x,loc;
    printf("\nEnter the number of elements in the array:");
    scanf ("%d",&n);
    printf("\nEnter the numbers:");
    for ( i = 0; i < n; i++)
    {
        scanf ("%d",&arr[i]);
    }
    printf ("Enter the element to be searched:");
    scanf("%d",&x);
    loc=linear_search (arr,n,x);
    if(loc==-1)
    printf ("\n%d does not exist in the array",x);
    else
    printf("\n%d is present at the position %d in the array",x,loc);
    return 0;
}

