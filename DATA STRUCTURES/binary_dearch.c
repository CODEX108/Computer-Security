// #include<stdio.h>

// int main()
// {
//     int a[20],num,n,i,beg,end,mid,found=0;
//     printf ("Enter the numberof elements in the array:");
//     scanf ("%d",&n);
//     printf("\nEnter the numbers:");
//     for ( i = 0; i < n; i++)
//     {
//         scanf ("%d",&a[i]);
//     }


// printf("Enter the number to be searched: ");
// scanf ("%d",&num);
// beg=0;
// end=n-1;
// while(beg<=end)
// {
//     mid=(beg+end)/2;
//     if(a[mid]==num)
//     {
//         printf("\n%d is present in the array at position %d",num,mid+1);
//         found=1;
//         break;
//     }
//     else
//     {
//         if(a[mid]>mid)
//         end=mid-1;
//         else
//         beg=mid+1;
//     }
// }
// if (found==0)
// printf ("\n%d does not exist in the array",num);



// }



#include <stdio.h>
int main()
{
  int c, first, last, middle, n, search, array[100];

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  printf("Enter value to find\n");
  scanf("%d", &search);

  first = 0;
  last = n - 1;
  middle = (first+last)/2;

  while (first <= last) {
    if (array[middle] < search)
      first = middle + 1;
    else if (array[middle] == search) {
      printf("%d found at location %d.\n", search, middle+1);
      break;
    }
    else
      last = middle - 1;

    middle = (first + last)/2;
  }
  if (first > last)
    printf("Not found! %d isn't present in the list.\n", search);

  return 0;
}