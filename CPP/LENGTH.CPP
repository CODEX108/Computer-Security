#include <iostream>
#define MAX_SIZE 100 // Maximum size of the string
using namespace std;
 
int main() {
 
    char text[MAX_SIZE];
    char * str = text;
    int count = 0;
 
    // Inputtin string from user
    cout<<"Enter any string: ";
    cin>>text;
 
    // Iterating though last element of the string
    while(*(str++) != '\0') count++;
 
    cout<<"Length of "<<text<<" is "<<count;
 
    return 0;
}