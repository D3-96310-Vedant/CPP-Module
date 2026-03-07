/*14. Extend the BankAccount class (Assign 6) to include exception handling: in the deposit()
and withdraw() functions, if the amount is negative, throw the amount as a double, and in
the withdraw() function, if the amount is greater than the current balance, throw an error
message as a string. In main(), use multiple catch blocks to handle these exceptions and
display appropriate messages when they are caught*/
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

        if(amount < 0)
            throw amount;

        balance = balance + amount;

        cout<<"Deposit Successful"<<endl;
    }

    void withdraw(){
        double amount;

        cout<<"Enter amount to withdraw : ";
        cin>>amount;

        if(amount < 0)
            throw amount;

        if(amount > balance)
            throw string("Insufficient Balance");

        balance = balance - amount;

        cout<<"Withdrawal Successful"<<endl;
    }

    void display(){
        cout<<"Account Number : "<<accountNumber<<endl;
        cout<<"Account Holder : "<<accountHolderName<<endl;
        cout<<"Balance : "<<balance<<endl;
    }
};

int main(){

    BankAccount b1;

    b1.accept();

    try{
        b1.deposit();
        b1.withdraw();
    }

    catch(double amt){
        cout<<"Invalid amount entered : "<<amt<<endl;
    }

    catch(string msg){
        cout<<"Error : "<<msg<<endl;
    }

    cout<<"\nAccount Details"<<endl;
    b1.display();

    return 0;
}