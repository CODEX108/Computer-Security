#include <stdio.h>
#include <stdarg.h>
using namespace std;

int getSum (int number,...)
{
    va_list list;
    int sum=0;

    va_start (list,number);

    for (int i = 0; i < number; i++)
    {
        int n= va_arg (list,number);
        sum=+n;
    }
    va_end (list);
    return sum;
}

void main()
{
  printf("Sum of 2 numbers is",getSum(2,3,4));

}
    
