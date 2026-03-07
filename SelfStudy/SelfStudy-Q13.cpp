/*13. Create a `Payment` base class and derived classes `CreditCard`, `UPI`, and `Cash`. Write
method `void makePayment(double amount)` in base class (choose virtual or abstract) and
override in derived classes (Simulate payment with appropriate `cout` statements). Write a static method `Payment* create(char *mode)` in a new `PaymentFactory` class. In main()
get payment object via factory and test its makePayment().*/
#include<iostream>
using namespace std;

class Payment{
public:
    virtual void makePayment(double amount){
        cout<<"Making payment of "<<amount<<endl;
    }

    virtual ~Payment(){}
};

class CreditCard : public Payment{
public:
    void makePayment(double amount){
        cout<<"Payment of "<<amount<<" done using Credit Card"<<endl;
    }
};

class UPI : public Payment{
public:
    void makePayment(double amount){
        cout<<"Payment of "<<amount<<" done using UPI"<<endl;
    }
};

class Cash : public Payment{
public:
    void makePayment(double amount){
        cout<<"Payment of "<<amount<<" done using Cash"<<endl;
    }
};

class PaymentFactory{
public:
    static Payment* create(char mode){

        if(mode == 'c')
            return new CreditCard();

        else if(mode == 'u')
            return new UPI();

        else if(mode == 'h')
            return new Cash();

        else
            return NULL;
    }
};

int main(){

    char choice;
    double amount;

    cout<<"Enter payment mode (c = CreditCard, u = UPI, h = Cash) : ";
    cin>>choice;

    Payment *p = PaymentFactory::create(choice);

    if(p == NULL){
        cout<<"Invalid payment mode"<<endl;
        return 0;
    }

    cout<<"Enter amount : ";
    cin>>amount;

    p->makePayment(amount);

    delete p;

    return 0;
}