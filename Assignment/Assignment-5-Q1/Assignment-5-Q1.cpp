#include<iostream>
using namespace std;
/*Q1. Create a class Date with data memebrs day,month and year.
Cretae a class Person with data members name,address and birthdate. The birthdate should be of
type Date.
Create a class Student with data members id, marks, course and joining date, end date. The joining
date and end date should be of type date.
Implement above classes. Test all functionalities in main().
(Note - Only Perform the Association in the above case. No need of Inheritance)*/
/* Date Class */
class Date{
private:
    int day;
    int month;
    int year;

public:
    void acceptDate(){
        cout<<"Enter Day : ";
        cin>>day;

        cout<<"Enter Month : ";
        cin>>month;

        cout<<"Enter Year : ";
        cin>>year;
    }

    void displayDate(){
        cout<<day<<"/"<<month<<"/"<<year;
    }
};

/* Person Class */
class Person{
private:
    string name;
    string address;
    Date birthdate;   // Association

public:

    void acceptPerson(){
        cout<<"Enter Name : ";
        cin>>name;

        cout<<"Enter Address : ";
        cin>>address;

        cout<<"Enter Birth Date"<<endl;
        birthdate.acceptDate();
    }

    void displayPerson(){
        cout<<"Name : "<<name<<endl;
        cout<<"Address : "<<address<<endl;
        cout<<"Birth Date : ";
        birthdate.displayDate();
        cout<<endl;
    }
};

/* Student Class */
class Student{
private:
    int id;
    int marks;
    string course;

    Date joiningDate;   // Association
    Date endDate;       // Association

public:

    void acceptStudent(){
        cout<<"Enter ID : ";
        cin>>id;

        cout<<"Enter Marks : ";
        cin>>marks;

        cout<<"Enter Course : ";
        cin>>course;

        cout<<"Enter Joining Date"<<endl;
        joiningDate.acceptDate();

        cout<<"Enter End Date"<<endl;
        endDate.acceptDate();
    }

    void displayStudent(){
        cout<<"Student ID : "<<id<<endl;
        cout<<"Marks : "<<marks<<endl;
        cout<<"Course : "<<course<<endl;

        cout<<"Joining Date : ";
        joiningDate.displayDate();
        cout<<endl;

        cout<<"End Date : ";
        endDate.displayDate();
        cout<<endl;
    }
};

/* Main Function */
int main(){

    Person p;
    Student s;

    cout<<"Enter Person Details"<<endl;
    p.acceptPerson();

    cout<<"\nEnter Student Details"<<endl;
    s.acceptStudent();

    cout<<"\n----- Person Information -----"<<endl;
    p.displayPerson();

    cout<<"\n----- Student Information -----"<<endl;
    s.displayStudent();

    return 0;
}