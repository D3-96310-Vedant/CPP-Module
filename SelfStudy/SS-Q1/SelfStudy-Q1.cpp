/*1. Write a program to implement `swap()` by value and compare the result with referencebased swap.
exmaple :
// Swap using Call by Value
void swapByValue(int a, int b)
{
 // TODO:
 // 1. Declare temporary variable
 // 2. Swap a and b
}
// Swap using Call by Reference
void swapByReference(_______)
{
 // TODO:
 // 1. Declare temporary variable
 // 2. Swap a and b
}
int main()
{
 int num1 = 10;
 int num2 = 20;
 cout << "Before swapByValue: ";
 cout << num1 << " " << num2 << endl;
 swapByValue(num1, num2);
 cout << "After swapByValue: ";
 cout << num1 << " " << num2 << endl;
 cout << "\nBefore swapByReference: ";
 cout << num1 << " " << num2 << endl;
 swapByReference(______________)
 cout << "After swapByReference: ";
 cout << num1 << " " << num2 << endl;
 return 0;
}
*/
#include<iostream>
using namespace std;
void swapByValue(int a,int b){
    //Swap By vlaue
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void swapByReference(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
int num1,num2;
cout<<"Enter value for Num1 & Num2 :"<<endl;
cin>>num1>>num2;


cout<<"Before 'Swap by Value'"<<endl;
cout<<"Num1 :"<<num1<<endl;
cout<<"Num2 :"<<num2<<endl;

//Swap by value
swapByValue(num1,num2);

cout<<"After 'SSwap by Value"<<endl;
cout<<"Num1 :"<<num1<<endl;
cout<<"Num2 :"<<num2<<endl;


cout<<"Before 'Swap by Reference'"<<endl;
cout<<"Num1 :"<<num1<<endl;
cout<<"Num2 :"<<num2<<endl;

//Swap by Reference
swapByReference(&num1,&num2);

cout<<"After 'Swap by Reference'"<<endl;
cout<<"Num1 :"<<num1<<endl;
cout<<"Num2 :"<<num2<<endl;


}
