#include<iostream>

using namespace std;

class Pizza{
int amountOfVeggies;
int amountOfcheese;
int amountOfmozzerella;
int amountOfMayonese;
int amountOfBlackOlives;
int amountOfChilliFlakes;
int amountOfJalapeno;
int amountOfChicken;
int amountOfPaneer;

public:

Pizza(){
    amountOfVeggies = 5; 
    amountOfcheese = 2;
    amountOfmozzerella = 3;
    amountOfMayonese = 2;
    amountOfBlackOlives = 1; 
    amountOfChilliFlakes= 10;
    amountOfJalapeno = 2;
    amountOfChicken = 1;
    amountOfPaneer = 1;
}

void PizzaContent(){
    cout<<"Your pizza have "<<amountOfVeggies<<" amount of Veggies "<<amountOfcheese<<" amount of cheese "<<amountOfmozzerella<<" amount of mozzerella "<<amountOfMayonese<<" amount of Mayonese "<<amountOfBlackOlives<<" amount of black olives "<<amountOfChilliFlakes<<" amount of ChilliFlakes "<<amountOfJalapeno<<" amount of Jalapeno "<<amountOfChicken<<" amount of Chicken "<<amountOfPaneer<<" amount of Paneer."<<endl;
}

};

int main(){
    Pizza *ptr;//Initialisation of pointer
    Pizza pizza1;//Object creation
    ptr=&pizza1;// Saving the address of object in pointer variable
    ptr->PizzaContent();//pizza1.PizzaContent();
    pizza1.PizzaContent();
    return 0;
}