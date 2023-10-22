#include<iostream>

using namespace std;

class VadaPav{//Abstract class
    public:
    virtual void ShowPrice() = 0; //Abstract method
    virtual void AmountOfChutny() = 0; //Abstract method
    void Greeting(){
        cout<<"Ky Saheb? Ksa ky? Ky madat kru tumchi?"<<endl;
    }
};

class Kunj_Vihar:public VadaPav{
    public:
    void ShowPrice(){
        cout<<"Price of the Vadapav at Kunj_Vihar is 12 rupees."<<endl;
    }

    void AmountOfChutny(){
        cout<<"1 chamach"<<endl;
    }
};

class Gajanan:public VadaPav{
    public:
    void ShowPrice(){
        cout<<"Price of the Vadapav at Gajanan is 15 rupees."<<endl;
    }

    void AmountOfChutny(){
        cout<<"2 chamach"<<endl;
    }
};

int main(){
    VadaPav *ptr1, *ptr2;
    Kunj_Vihar k1;
    Gajanan g1;
    ptr1 = &k1;
    ptr2 = &g1;
    ptr1->Greeting();
    ptr1->ShowPrice();//Kunj_Vihar
    ptr2->Greeting();
    ptr2->ShowPrice();//Gajanan    
    return 0;
}