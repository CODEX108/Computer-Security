#include<iostream>
using namespace std;

class milk{
    public:
    int amountOfMilk = 1;
};

class curd:public milk{//single inheritance
    
    public:
    int amountofCurd=2;
    //int amountOfMilk =1;  
};

class MaharashtrianRaita:curd{//multilevel inheritance
    public:
    float amountOfSalt = 0.25;
    int NoOfChillies = 2;
    int NoOfOnions = 2;
    int NoOfTomatoes = 2;
    int CorrianderLeaves = 10;
    void Ingredients(){
        cout<<"To make a a requied curd, we need "<<amountOfMilk<<" ltrs of milk and "<<amountofCurd<<" teaspoons of curd"<<endl;
        cout<<"To make a Maharastrian raita. we need "<<amountOfSalt<<" teaspoons of salt "<<NoOfChillies<<" number of chillies, "<<NoOfOnions<<" number of onions, "<<NoOfTomatoes<<" number of tomatoes, "<<CorrianderLeaves<<" number of leaves and curd which we created in first step."<<endl;
    }
};
int main(){
    MaharashtrianRaita mr;
    mr.Ingredients();
    return 0;
}