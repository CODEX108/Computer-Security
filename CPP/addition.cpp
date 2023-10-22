#include <iostream>
using namespace std;

class Add
{
public:
    void Addition(int arr[])
    {
        int sum=0,i;
        for (int i = 0; i < 10; i++) {   
       sum = sum + arr[i];  
    }    
      cout << "Addition of 10 integer numbers is " <<sum<<endl;
    }

    void Addition(float dec[])
    {
         float sum=0.0;
         int i;
        for (int i = 0; i < 10; i++) {   
       sum = sum + dec[i];  
    }    
      cout << "Addition of 10 integer numbers is " <<sum<<endl;
    }
};

int main()
{
    Add num;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float dec[]={1.1,2.2,3.3,4.4,5.5};
    num.Addition(arr);
    num.Addition(dec);

    return 0;
}
