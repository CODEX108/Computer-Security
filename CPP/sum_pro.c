#include <stdio.h>
int main()
{
    int i,n,sum=0;
    printf("number enter kar: ");
    scanf("%d",&n);
    int a[n];
    for ( i = 0; i <= n; i++)
    {
       printf("Enter num %d",i+1);
       scanf("%d",&a[i]);
    }

    for (int  i = 0; i < n/2; i++)
    {
        sum+= a[i]*a[((n-1)-i)];
    }
    printf("\n%d",sum);
    
}