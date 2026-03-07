/*16. What problem you see in the following code in exception stack unwinding? Resolve
them using user-defined smart pointer.
 try {
 Student *s = new Student;
 // accept info from user and set using setters
 s->display();
 delete s;
 }
 catch(...) {
 cout << "invalid input" << endl;
 }
*/
#include<iostream>
using namespace std;

class Student{
private:
    int rollNo;

public:
    Student(){
        cout<<"Student Object Created"<<endl;
    }

    void display(){
        cout<<"Displaying Student"<<endl;
    }

    ~Student(){
        cout<<"Student Object Destroyed"<<endl;
    }
};

/* Smart Pointer Class */
class SmartPointer{
private:
    Student *ptr;

public:
    SmartPointer(Student *p){
        ptr = p;
    }

    Student* operator->(){
        return ptr;
    }

    ~SmartPointer(){
        delete ptr;
        cout<<"Memory Released by SmartPointer"<<endl;
    }
};

int main(){

    try{

        SmartPointer s(new Student);

        s->display();

    }

    catch(...){
        cout<<"Invalid Input"<<endl;
    }

    return 0;
}