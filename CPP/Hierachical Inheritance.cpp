#include<iostream>

using namespace std;

class Dadaji{
protected:
long int Sampatti = 40000000;

public:
void grandFatherSampatti(){
    cout<<"Sampatti of dadaji is "<<Sampatti<<endl;
}
};

class Father: public Dadaji{
protected:
long int PapaKiSampatti = 100000000;

};

class Uncle: public Dadaji{
protected:
long int UncleKiSampatti = 100000000;
};

int main(){
    Father f1;
    f1.grandFatherSampatti();
    Uncle u1;
    u1.grandFatherSampatti();
    return 0;
}