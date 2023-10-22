#include<iostream>
using namespace std;
class city
{
private:
char c_name[40];
char state[40];
public:
void setName()
 {
cout<< "Enter city name: ";
cin>>c_name;
cout<<"Enter state:";
cin>>state;
 }
void printName()
 {
cout<< "\n City Name is: " <<c_name;
cout<< "\n State is : " << state;
 }
};
void main()
{
city* cPtr[100]; //array of pointers to cities
int n = 0; //number of cities in array
char choice;
for(n=0;n<5;n++)
 {
cPtr[n] = new city; //make new object
cPtr[n]->setName();
 }
for(int i = 0; i< n; i++)
 {
cout<< "\nCity number " << i+1;
cPtr[i]->printName();
 }
cout<<endl;

}
