#include<iostream>
#include<cstring>
using namespace std;

class String
{
    private:
    int length;
    char *ptr;
    public:
    String(int l, char *p)
    {
        cout<<"Constructor Called........"<<endl;
        length = l;
        ptr = p;
    }

    String(const String &obj)
    {
        cout<<"Copy Constructor Called....."<<endl;
        length = obj.length;
        ptr = new char[length + 1];
        strcpy(ptr,obj.ptr);
    }

    ~String()
    {
        delete ptr;
    }

    void print()
    {
        cout<<"String Is "<<ptr<<endl;
    }

    char getCharAt(int index)
    {
        for (int i = 0; i <= length; i++)
        {
            if (index == i)
            {
                return *ptr;
            }
            ptr++;
        }
    }


    int getLength(){
        return strlen(ptr);      
    }
};

int main()
{
    string str = "Government";
    String s1 = String(5 , &str[0]);
    s1.print();
    cout<<"-----------------------------------------------------------"<<endl;
    String s2 = s1;
    s2.print();
    cout<<"-----------------------------------------------------------"<<endl;
    int index, character;
    cout<<"Enter Index Of The Character U Wanna Get: ";
    cin>>index;
    cout<<"The Character At Index "<<index<<" Is "<<s1.getCharAt(index)<<endl;
    cout<<"-----------------------------------------------------------"<<endl;
    cout<<"Length Of The String "<<str<<" Is "<<s2.getLength()<<endl;
    return 0;
}