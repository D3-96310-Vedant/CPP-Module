//2. Write an inline function to calculate factorial and calculate power.
#include<iostream>
using namespace std;
inline int Factorial(int num){
     int fact =1;
     for(int i=1;i<=num;i++){
        fact *= i;
     }
     return fact;
}
inline int Pow(int Base,int Index){
    int pow=1;
    for (int i=0;i<Index;i++){
        pow*=Base;
    }
    return pow;
}
int main(){
    int num;
    cout<<"Enter a number to find its Factorial :";
    cin>>num;
    //Factorial
    cout<<"Factorial of "<<num<<"  :"<<Factorial(num)<<endl;

    //Power
    int base,index;
    cout<<"Enter Base And Power"<<endl;
    cin>>base>>index;
    cout<<"Power of :"<<Pow(base,index)<<endl;
    
}
