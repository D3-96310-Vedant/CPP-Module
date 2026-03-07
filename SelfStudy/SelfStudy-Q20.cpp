/*20. Demonstrate ownership transfer with unique_ptr, shared ownership with shared_ptr,
and non-owning reference with weak_ptr.*/
#include<iostream>
#include<memory>
using namespace std;

class Student{
public:
    Student(){
        cout<<"Student object created"<<endl;
    }

    void display(){
        cout<<"Student Display Function"<<endl;
    }

    ~Student(){
        cout<<"Student object destroyed"<<endl;
    }
};

int main(){

    cout<<"--- Unique Pointer (Ownership Transfer) ---"<<endl;

    unique_ptr<Student> p1(new Student());

    p1->display();

    //transfer ownership
    unique_ptr<Student> p2 = move(p1);

    if(!p1)
        cout<<"p1 no longer owns the object"<<endl;

    p2->display();



    cout<<"\n--- Shared Pointer (Shared Ownership) ---"<<endl;

    shared_ptr<Student> s1(new Student());

    shared_ptr<Student> s2 = s1;

    cout<<"Shared count : "<<s1.use_count()<<endl;

    s2->display();



    cout<<"\n--- Weak Pointer (Non Owning Reference) ---"<<endl;

    weak_ptr<Student> w1 = s1;

    if(!w1.expired())
    {
        shared_ptr<Student> temp = w1.lock();
        temp->display();
    }

    return 0;
}