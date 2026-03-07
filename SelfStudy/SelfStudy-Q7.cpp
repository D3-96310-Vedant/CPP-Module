/*7. Create `Student` and `Teacher` class inside a namespace `college`. Write constructors,
getter/setters, display() method in both classes. Create objects in main() and call methods. */
#include<iostream>
using namespace std;

namespace college{

class Student{
private:
    int rollNo;
    string name;

public:
    //Constructor
    Student(int r,string n){
        rollNo = r;
        name = n;
    }

    //Setter
    void setRollNo(int r){
        rollNo = r;
    }

    void setName(string n){
        name = n;
    }

    //Getter
    int getRollNo(){
        return rollNo;
    }

    string getName(){
        return name;
    }

    //Display
    void display(){
        cout<<"Student Roll No : "<<rollNo<<endl;
        cout<<"Student Name : "<<name<<endl;
    }
};


class Teacher{
private:
    int id;
    string name;

public:
    //Constructor
    Teacher(int i,string n){
        id = i;
        name = n;
    }

    //Setter
    void setId(int i){
        id = i;
    }

    void setName(string n){
        name = n;
    }

    //Getter
    int getId(){
        return id;
    }

    string getName(){
        return name;
    }

    //Display
    void display(){
        cout<<"Teacher ID : "<<id<<endl;
        cout<<"Teacher Name : "<<name<<endl;
    }
};

}

int main(){

    //Creating objects using namespace
    college::Student s1(101,"Rahul");
    college::Teacher t1(1,"Sharma");

    cout<<"Student Details"<<endl;
    s1.display();

    cout<<endl;

    cout<<"Teacher Details"<<endl;
    t1.display();

    return 0;
}