
#include<iostream>
using namespace std;
class overload_cnst
{
int a,b;
public:
overload_cnst()  //default const
{
a=0;
b=0;
}
overload_cnst(int x,int y)  //parameterized const
{
a=x;
b=y;
}
void display()
{
cout<<"\n"<<"\t"<<a<<"\t"<<b<<"\n";
}
};

int  main()
{
overload_cnst o,o1(10,20);  
o.display();
o1.display();
overload_cnst o2 = o1;
o2.display();
return 0;
}