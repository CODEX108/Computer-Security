/*Write a program to define a class having data members principle, duration &; rate-of-
interest. Declare rate-of-interest as static member variable. Calculate the simple
interest &amp; display it for one object.*/

#include <iostream>
using namespace std;

class simpleInterest
{
public:
    float principle;
    float duration;
    
    static float rate_of_interest;

    void Info()
    {
        float result = principle * duration * rate_of_interest / 100;
        cout << "The simple interest is " <<result<< endl;
    }
};

float simpleInterest::rate_of_interest;

int main()
{
    simpleInterest s1;
    s1.principle = 10000;
    s1.duration = 2;
    s1.rate_of_interest = 7;
    s1.Info();
    return 0;
}
