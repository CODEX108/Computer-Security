#include<iostream>

using namespace std;

class Dadaji{

    public:
    virtual void showName(){
        cout<<"Name of Dadaji = XYZ"<<endl;
    }

    virtual void showAge(){
        cout<<"Age of Dadaji = 67"<<endl;
    }

    void showBusiness(){
        cout<<"Business = Store"<<endl;
    }
};

class Papaji:public Dadaji{

    public:
    void showName(){//Function overriding
        cout<<"Name of Papaji = ABC"<<endl;
    }

    void showAge(){//Function overriding
        cout<<"Age of Papaji = 41"<<endl;
    }

    void showJob(){
        cout<<"Job = Software Engineer"<<endl;
    }

    // showBusiness = Hidden -> Because of inheritance/
};


/*
pointer = parent class (Base class)
object = child class (Derived class)
virtual function in parent and those are overrided in child
*/
int main(){
    Dadaji *ptr;
    // Dadaji d1;
    // ptr = &d1;
    // ptr->showAge();
    // ptr->showName();
    // ptr->showBusiness();
    Papaji p1;
    ptr = &p1; //Object ki info print kr
    ptr->showAge();// Runtime polymorphism = Pointer will be of parent but object will be of child
    ptr->showName(); // Runtime polymorphism = Pointer will be of parent but object will be of child
    ptr->showBusiness();
    //ptr->showJob(); This statement will not work because 'showBusiness' methos is not present in Dadaji class.
    
    return 0;
}