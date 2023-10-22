

#include <iostream>
using namespace std;

int primeDetails(int s,int l);
int main()
{
    int min, max, i, j, count,temp, sum;
    temp=sum;
    cout << "Enter the minimum number";
    cin >> min;
    cout << "Enter the maximum number";
    cin >> max;
    for (i = min; i < max; i++)
    {
        count = 0;
        for (j = 1; j <= i; j++)
        {
           
            if (i % j == 0)

                count++;
                break;
                 temp = 0;
            temp += i;
        }
        if (count == 2)
        {
           
            cout << i << "  ";
             
        }
    }
    cout << "the sum is" <<sum;
    return 0;
}
