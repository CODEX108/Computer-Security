/* C program to insert an element in an array */
// #include <stdio.h>
// int main()
// {
// int n,arr[n],i,pos;
// printf("\nEnter the size of the array: ");
// scanf("%d",&n);
// printf("\nEnter the elements in the array: ");
// for(i = 0; i < n; i++)
// {
// scanf("%d",&arr[i]);
// }
// printf ("\nEnter the position at which the element is to be inserted: ");
// scanf("%d",&pos);
// int element;
// printf ("\nEnter the element which is to be inserted: ");
// scanf("%d",&element);
// if(pos > n)
// printf("Invalid position");
// else
// {
// for (i = n-1; i >= pos-1; i--)
// arr[i+1] = arr[i];

// arr[pos-1] = element;

// printf("Array after insertion is:\n");

// for (i = 0; i <= n; i++)
// printf("Data=%d\n", arr[i]);
// }

// return 0;
// }









#include <stdio.h>

int main()
{
int array[100], position, c, n;

printf("Enter the number of elements of the array : " );
scanf("%d", &n);

printf("\nInput the array elements : ");

for (c = 0; c < n; c++)
scanf("%d", &array[c]);

printf("\nEnter the position : ");
scanf("%d", &position);

if (position >= n+1)
printf("\nDeletion not possible.\n");
else
{
for (c = position - 1; c < n - 1; c++)
array[c] = array[c+1];

printf("\nArray after deletion :\n ");

for (c = 0; c < n - 1; c++)
printf("DATA= %d \n", array[c]);
}
return 0;
}