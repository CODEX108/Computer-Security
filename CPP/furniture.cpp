

#include<iostream>
#include <cstdio>
using namespace std;
class furniture
{
public:
  char matrial[20];
  int price;
};

class table:public furniture
{
public:
  int height;
  float sur_area;

  
  void getData()
  {
      
      cout<<"enter the material"<<endl;
      gets(matrial);
      cout<<"enter the price"<<endl;
      cin>>price;
      cout<<"Enter the height"<<endl;
      cin>>height;
      cout<<"enter surface area"<<endl;
      cin>> sur_area;
      
  }
  
  void setData()
  {
      cout<<"Material is :  "<<matrial<<endl;
      cout<<"Price is: Rs"<<price<<endl;
cout<<" Height is "<<height<<"ft"<<endl;
cout<<"Surface area is :  "<<sur_area<<" sq m"<<endl;
  }
};

int main()
{
    table t;
    t.getData();
    t.setData();
    return 0;
}

