/*Q1. Write a menu driven program to calculate volume of the box(length * width * height).
Provide parameterless, parameterized(with 3 parameters) and single paramaterized constructor.
Create the local objects in respective case and call the function to caluclate area.
Menu options ->
1. Calculate Volume with default values
2. Calculate Volume with length,breadth and height with same value
3. Calculate Volume with different length,breadth and height values.*/
#include<iostream>
using namespace std;
class Box{
    private:
    double length;
    double width;
    double height;
    public:
//ParameterLess Constructor
    Box(){   
        length=1.0;
        width=1.0;
        height=1.0;
    } 
    //singel Parameter Parametrized Constructor
    Box(double l){
        length=l;
        width=l;
        height=l;
     }
     //parameterized(with 3 parameters)
     Box(double l, double w, double h){
        length=l;
        width=w;
        height=h;
     }
     double Volume(){
      
        return (length*width*height);
     }
     
  
    
};
int main(){
    int choice;
    //Box menuList()
    do{
        cout<<"\n0. To Exit";
        cout<<"\n1. Calculate default Volume";
        cout<<"\n2. calculate Volume of Square";
        cout<<"\n3. Calculate Volumme of Rectangel";
        cout<<"\n4.Enter Choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
            Box b1;
            cout<<"Volume :"<<b1.Volume()<<endl; 
            break;
            }
            case 2:
            {
                double side;
                cout<<"Enter the side of square\n";
                cin>>side;
                Box b1(side);
                cout<<"Volume of Square :"<<b1.Volume()<<endl;
                break;  
            }
            case 3:
            {
                int l,w,h;
                cout<<"Enter Length, Width and Height of Square :\n";
                cin>>l>>w>>h;
                Box b1 (l,w,h);
                cout<<"Volume of Rectangle :"<<b1.Volume()<<endl;
            }
            case 0:
            {
                cout<<"Exiting the Program\n";
                break;
            }
            default:
            cout<<"Exiting the Program";
            break;
        }
    }while(choice!=0);
    return 0;
}
