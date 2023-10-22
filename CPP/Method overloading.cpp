#include<iostream>

using namespace std;

int addition(int number1, int number2){ //Method overloading
    return (number1+number2);
}

int addition(int number1, float number2){ //Method overloading
    return (number1+number2);
}
int addition(int number1, int number2, int number3){//Method overloading
    return (number1+number2+number3);
}

int main(){
    cout<<"Addition is "<<addition(2,5)<<endl;
    cout<<"Addition is "<<addition(2,5,8)<<endl;
    return 0;
}