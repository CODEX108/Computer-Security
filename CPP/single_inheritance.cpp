#include<iostream>

using namespace std;

class water{
public:
    int amountOfWater=300;

};

class Lemonade:water{// Single level inheritance
public:
    int Lemons=2;
    int amountOfSugar=3;
    float amountOfSalt=0.25; // 1/4 of a teaspoon
    int amountOfBesselSeeds = 1;

    void Ingredients(){
        cout<<"To make a lemonade, "<<amountOfWater<<" mls of water "<<Lemons<<" lemons "<<amountOfSugar<<" teaspoons of sugar "<<amountOfSalt<<" teaspoons of salt "<<amountOfBesselSeeds<<" teaspoons of bessel seeds is required"<<endl;
    }
};

int main(){
    Lemonade l;
    l.Ingredients();
    return 0;
}