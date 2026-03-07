/*6. Create a class BankAccount with private data members (accountNumber,
accountHolderName, balance). Provide public member functions to deposit, withdraw, and
display balance. Create an object in main() and demonstrate encapsulation by accessing
data only through public functions i.e. deposit(), withdraw().
*/
#include<iostream>
using namespace std;

class BankAccount{
private:
    int accountNumber;
    string accountHolderName;
    double balance;

public:

    void accept(){
        cout<<"Enter Account Number : ";
        cin>>accountNumber;

        cout<<"Enter Account Holder Name : ";
        cin>>accountHolderName;

        cout<<"Enter Initial Balance : ";
        cin>>balance;
    }

    void deposit(){
        double amount;

        cout<<"Enter amount to deposit : ";
        cin>>amount;

        balance = balance + amount;

        cout<<"Amount Deposited Successfully"<<endl;
    }

    void withdraw(){
        double amount;

        cout<<"Enter amount to withdraw : ";
        cin>>amount;

        if(amount > balance){
            cout<<"Insufficient Balance"<<endl;
        }
        else{
            balance = balance - amount;
            cout<<"Withdrawal Successful"<<endl;
        }
    }

    void displayBalance(){
        cout<<"Account Number : "<<accountNumber<<endl;
        cout<<"Account Holder : "<<accountHolderName<<endl;
        cout<<"Balance : "<<balance<<endl;
    }
};

int main(){

    BankAccount b1;

    b1.accept();

    b1.deposit();

    b1.withdraw();

    cout<<"\nAccount Details"<<endl;
    b1.displayBalance();

    return 0;
}