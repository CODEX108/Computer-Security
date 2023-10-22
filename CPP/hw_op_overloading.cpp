#include <iostream>
using namespace std;

class Matrices
{
    int a11,a21,a31;

    public:
    Matrices (int a11,int a21,int a31)
    {
        this->a11=a11;
        this->a21=a21;
        this->a31=a31;
    }

    Matrices(){}
    

    void show(){
        cout<<a11<<endl;
        cout<<a21<<endl;
        cout<<a31<<endl;
    }

 Matrices operator- (Matrices &object){
     Matrices m;
     m.a11 = a11-object.a11;
     m.a21 = a21-object.a21;
     m.a31 = a31-object.a31;
     return m;
 }

};

int main()
{
    Matrices m1(1,2,3);
    Matrices m2 (1,2,3);
    Matrices m3 = m1-m2;
    cout << "First Matrix" << endl;
    m1.show();
    cout << "Second Matrix" << endl;
    m2.show();
    cout << "Resultant Matrix after subtraction" << endl;
    m3.show();

    return 0;
}