/*Q2. Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a fifty-cent toll.
Mostly they do, but sometimes a car goes by without paying.
The tollbooth keeps track of the number of cars that have gone by and of the total amount of money
collected. Model this tollbooth with a class called tollbooth.
The two data items are a type unsigned int to hold the total number of cars, and a type double to
hold the total amount of money collected.
A constructor initializes all data members to 0.
A member function called payingCar() increments the car total and adds 0.50 to the cash total. 
An other function, called nopayCar() increments the car total but adds nothing to the cash total. 
Finally, a member function called printOnConsole() displays the two totals and number of paying as well as non paying cars total.*/
#include<iostream>
using  namespace std;

class ToolBooth{
    private:
   unsigned payingCars;
   unsigned nonPayingCars;
   unsigned totalCars;
   double totalAmount;  

public:
ToolBooth(){
    payingCars = 0;
    nonPayingCars =0;
    totalCars = 0;
    totalAmount =0.0;
}

void payingCar(){
    payingCars++;
    totalCars++;
    totalAmount +=.50;
}
void nonPayingCar(){
    nonPayingCars++;
    totalCars++;
}
void Record(){
    cout<<" \nTotal Cars :"<<totalCars;
    cout<<" \nCars Payed Tool :"<<payingCars;
    cout<<" \nCars Not Payed Tool :"<<nonPayingCars;
    cout<<" \nTotal Amount :"<<totalAmount;
}
};
int main(){
    ToolBooth c1;
    int choice;
     do{
        cout<<" \n#------------#";
        cout<<"\n0. to Exit";
        cout<<"\n1. Paying Car";
        cout<<"\n2. Non Paying Car";
        cout<<"\n3. Record ";
        cout<<"\nEnter choice :";
        cin>>choice;

        switch(choice){
            case 1:
             c1.payingCar();
            break;
            case 2:
            c1.nonPayingCar();
            break;
            case 3:
            c1.Record();
            break;
            case 0:
            break;
            default:
            cout<<"Invalid input";
        }
     }while(choice!=0);
}
