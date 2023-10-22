#include <iostream>
#include <string.h>
using namespace std;
class Customer                //MULTILEVEL INHERITANCE
{
private:
    char name[20];
    long phone_number;

public:
    void accept_cust()
    {
        cout << "\nEnter the name:- ";
        cin >> name;
        cout << " Enter the Phone number:- ";
        cin >> phone_number;
    }
    void display_cust()
    {
        cout << "\n Name :- \n" << name;
        cout << "\nPhone Number :- \n" << phone_number;
    }
};
class Depositor : public Customer        //Customer IS INHERITED BY class Depositor
{
private:
    int acc_no, balance;

public:
    void accept_depositer()
    {
        cout << "\nEnter Account Number:-"; 
        cin >> acc_no ;
        cout<<" Enter the balance:- ";
        cin>> balance;
    }
    void display_depositer()
    {
        cout << "\nAccount Number is:-" << acc_no;
        cout << "\nBalance is:-" << balance;
    }
};

class Borrower : public Depositor   // class Depositor IS INHERITED BY class Borrower
{
private:
    int Loan_no, Loan_amount;

public:
    void accept_borrow()
    {
        cout << "\nEnter Loan Number ";
        cin >> Loan_no;
        cout << " Loan Amount:- " ;
        cin >> Loan_amount;
    }
    void display_borrow()
    {
        cout << "\nLoan Number is:- \n" << Loan_no;
        cout << "\nLoan Amount is:- \n" << Loan_amount;
    }
};

int main()
{
    Borrower b1;
    cout<<"\n====================================================================\n";
    b1.accept_cust();
    b1.accept_depositer();
    b1.accept_borrow();
     cout<<"\n====================================================================\n";
    b1.display_cust();
    b1.display_depositer();
    b1.display_borrow();
    return 0;
}