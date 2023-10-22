#include <stdio.h>

void Rangesum (int ll,int ul)
{
int i, j;
    int isPrime, sum=0;
/* Find all prime numbers in given range */
    for(i=ll; i<=ul; i++)
    {

        /* Check if the current number i is Prime or not */
        isPrime = 1;
        for(j=2; j<=i/2 ;j++)
        {
            if(i%j==0)
            {
                /* 'i' is not prime */
                isPrime = 0;
                break;
            }
        }

        
        //  If i is Prime then add to sum
        
        if(isPrime==1)
        {
            sum += i;
        }
    }

    printf("Sum of all prime numbers between %d to %d = %d", ll, ul, sum);
}

int main()
{
    
   int  start, end;

    /* Input lower and upper limit from user */
    printf("Enter lower limit: ");
    scanf("%d", &start);
    printf("Enter upper limit: ");
    scanf("%d", &end);
    Rangesum(start,end);
    return 0;
}