/*Q1. Write a class for Time and provide the functionality
Time()
Time(int h,int m,int s)
getHour()
getMinute()
getSeconds()
printTime()
setHour()
setMinute()
setSeconds()
In main create array of objects of Time.
Allocate the memory for the array and the object dynamically.
Write a menu driven code which provides below functionality
1. Add Time
2. Display All Time
3. Display only hrs of all time objects*/
#include<iostream>
using namespace std;
class Time{
    int h;
    int m;
    int s;
    public:
    Time(void){
           h=0;
           m=0;
           s=0;
    }
    Time(int h,int m,int s){
        this->h=h;
        this->m=m;
        this->s=s;
    }
    int getHour(void){
        return h;
    }
    int getMinute(){
        return m;
    }
    int getSeconds(){
        return s;    
    }
    void printTime(){
        cout<<"Time is "<<h<<" : "<<m<<" : "<<s<<endl;
    }
    void setHour(void){
        cout<<"Enter Hour :";
        cin>>h;
    }
    void setMinute(void){
        cout<<"Enter Min :";
        cin>>m;
    }
    void setSecond(void){
        cout<<"Enter Seconds :";
        cin>>s;
    }
};
int menuList(void){
        int choice;
        cout<<"\n0. To Exit";
        cout<<"\n1. Add Time";
        cout<<"\n2. Display All Time";
        cout<<"\n3. Display only hrs of all time objects";
        cout<<"\nEnter Choice :";
        cin>>choice;
        return choice;
    }
int main(){
    
    int n;
    cout<<"Enter No of Entery :";
    cin>>n;
    Time * arr= new Time[n];
    int choice;
    while((choice=menuList())!=0){
        switch (choice){
            case 1:
            cout<<"Add Time\n";
            for (int i=0;i<n;i++){
                arr[i].setHour();
                arr[i].setMinute();
                arr[i].setSecond();
            }
            break;

            case 2:
            cout<<"Display All Time\n";
            cout<<"       Hrs|Min|Sec  \n";
            for(int i=0;i<n;i++){
                arr[i].printTime();
            }
            break;

            case 3:
            cout<<"Display only hrs of all time objects\n";
            cout<<"Index  |Hrs|";
            for(int i=0;i<n;i++){
                cout<<"\n ["<<i+1<<"] - | "<<arr[i].getHour()<<" |";
            }
            break;

            default:
            cout<<"Invalid Input";
            break;
        }
    }
    return 0;
}