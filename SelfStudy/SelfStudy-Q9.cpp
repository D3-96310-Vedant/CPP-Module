/*9. Create a base class Person with data members name and age and a member function
display(). Derive two classes Student (with data member marks) and Teacher (with data
member salary) from Person. Add a function in each derived class (study() for Student and
teach() for Teacher). Add abstract method work() in Person and implement in both derived
classes. Create Student and Teacher object in main() to demonstrate run-time
Polymorphism.*/
#include<iostream>
using namespace std;

class Person{
protected:
    string name;
    int age;

public:

    void accept(){
        cout<<"Enter Name : ";
        cin>>name;

        cout<<"Enter Age : ";
        cin>>age;
    }

    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age  : "<<age<<endl;
    }

    //Abstract method
    virtual void work() = 0;
};


class Student : public Person{
private:
    int marks;

public:

    void acceptStudent(){
        Person::accept();

        cout<<"Enter Marks : ";
        cin>>marks;
    }

    void study(){
        cout<<"Student is studying"<<endl;
    }

    void work(){
        cout<<"Student work : Studying"<<endl;
    }

    void displayStudent(){
        display();
        cout<<"Marks : "<<marks<<endl;
    }
};


class Teacher : public Person{
private:
    double salary;

public:

    void acceptTeacher(){
        Person::accept();

        cout<<"Enter Salary : ";
        cin>>salary;
    }

    void teach(){
        cout<<"Teacher is teaching"<<endl;
    }

    void work(){
        cout<<"Teacher work : Teaching"<<endl;
    }

    void displayTeacher(){
        display();
        cout<<"Salary : "<<salary<<endl;
    }
};


int main(){

    Person *p;

    Student s;
    Teacher t;

    cout<<"Enter Student Details"<<endl;
    s.acceptStudent();

    cout<<"\nEnter Teacher Details"<<endl;
    t.acceptTeacher();

    cout<<"\n--- Student Info ---"<<endl;
    p = &s;
    p->work();        //Runtime polymorphism
    s.displayStudent();
    s.study();

    cout<<"\n--- Teacher Info ---"<<endl;
    p = &t;
    p->work();        //Runtime polymorphism
    t.displayTeacher();
    t.teach();

    return 0;
}