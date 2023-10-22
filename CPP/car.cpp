#include <iostream>
using namespace std;

class Carmanufacturer
{
public:
   string name;
};

class carmodel : public Carmanufacturer
{
public:
   string model_name;
   int model_no;
   
};

class Car : public carmodel
{
   public:
   string model_colour;
   void carData()
   {
      cout << "Enter name of the car manufacturer :" << endl;
      cin >> name;
      cout << "Enter the model name: " << endl;
      cin >> model_name;
      cout << "Enter the model number: " << endl;
      cin >> model_no;
       cout << "Enter the model colour: " << endl;
       cin>>model_colour;
   }

   void putData()
      {
      cout << "Name of the car manufacturer :" <<name<< endl;
      cout << "The model name: " <<model_name<< endl;
      cout << "The model number: "<<model_no<< endl;
      cout<<"the model colour is: "<<model_colour<<endl;

      }
   
};

int main()
{
   Car c;
   c.carData();
   c.putData();
}