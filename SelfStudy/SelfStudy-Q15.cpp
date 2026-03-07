/*15. Throw a custom exception class from `Student` (Assign 7) class methods to prevent
negative marks.*/
#include<iostream>
using namespace std;

//Custom Exception Class
class InvalidMarksException{
private:
    string message;

public:
    InvalidMarksException(string msg){
        message = msg;
    }

    void showError(){
        cout<<message<<endl;
    }
};

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

        if(marks < 0)
            throw InvalidMarksException("Marks cannot be negative");
    }

    void display(){
        cout<<"Roll No : "<<rollNo<<endl;
        cout<<"Marks   : "<<marks<<endl;
    }
};

int main(){

    Student s1;

    try{
        s1.accept();
        s1.display();
    }

    catch(InvalidMarksException e){
        e.showError();
    }

    return 0;
}