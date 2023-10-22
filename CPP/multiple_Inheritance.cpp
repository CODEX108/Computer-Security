#include<iostream>

using namespace std;

class Water{
    public:
    int amountOfWater = 400;
};

class Sugar{
    public:
    int amountOfSugar = 5;
};

class TeaPowder{
    public:
    float amountOfTea = 2.5; 
};

class Milk{
    public:
    int amountOfMilk = 200;
};

class Tea:Water,Sugar,TeaPowder,Milk{//multiple Inheritance
int Ginger = 2;
public:
void Ingredients(){
    cout<<"To make tea, we need "<<amountOfWater<<" mls of water, "<<amountOfSugar<<" teaspoons of sugar, "<<amountOfTea<<" teaspoons of tea powder, "<<amountOfMilk<<" mls of milk, "<<Ginger<<" inches of ginger"<<endl;

}
};

int main(){
    Tea t;
    t.Ingredients();
    return 0;
}