/*3.
Write a program to:
Ask the user for number of students.
Dynamically allocate an array of Student objects using new.
Each student contains:
rollNo
marks
Display:
All student records
Highest marks
Properly release deallocate memory*/
#include<iostream>
using namespace std;

class Student{
private:
    int rollNo;
    int marks;

public:

    void accept(){
        cout<<"Enter Roll No : ";
        cin>>rollNo;

        cout<<"Enter Marks : ";
        cin>>marks;
    }

    void display(){
        cout<<"Roll No : "<<rollNo<<endl;
        cout<<"Marks   : "<<marks<<endl;
    }

    int getMarks(){
        return marks;
    }
};

int main(){

    int n;

    cout<<"Enter number of students : ";
    cin>>n;

    //Dynamic memory allocation
    Student *arr = new Student[n];

    //Accept student data
    for(int i=0;i<n;i++){
        cout<<"\nEnter details of student "<<i+1<<endl;
        arr[i].accept();
    }

    //Display all records
    cout<<"\n----- Student Records -----"<<endl;

    for(int i=0;i<n;i++){
        arr[i].display();
        cout<<endl;
    }

    //Find highest marks
    int highest = arr[0].getMarks();

    for(int i=1;i<n;i++){
        if(arr[i].getMarks() > highest)
            highest = arr[i].getMarks();
    }

    cout<<"Highest Marks : "<<highest<<endl;

    //Deallocate memory
    delete[] arr;

    return 0;
}