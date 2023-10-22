#include <iostream>
using namespace std;

class city
{
    string cityname;
    string state;

public:
    void setData(string a, string b)
    {
        state = a;
        cityname = b;
    }
    void getData(void)
    {
        cout << " Name of the state: " << state << endl;
        cout << " Name of the city: " << cityname << endl;
    }
};

int main()
{

    city *ptr = new city[5];
    city *ptrTemp = ptr;
    string p;
    int i;
    string q;
    for (i = 0; i < 5; i++)
    {
        cout << "Enter name of the city  " << i + 1 << endl;
        cin >> p;
        cout << "Enter name of  state " << i + 1 << endl;
        cin >> q;
        ptr->setData(p, q);
        ptr++;
    }

    for (i = 0; i < 5; i++)
    {
        cout<<"\n"<<endl;
        cout<<"-----------"<<endl;
        cout << "City number: " << i + 1 << endl;
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}