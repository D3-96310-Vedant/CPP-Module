/*17. Write a program to save and load `Student` object using file IO*/
#include<iostream>
#include<fstream>
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

    void writeFile(){
        ofstream fout("student.txt");

        fout<<rollNo<<endl;
        fout<<marks<<endl;

        fout.close();
    }

    void readFile(){
        ifstream fin("student.txt");

        fin>>rollNo;
        fin>>marks;

        fin.close();
    }
};

int main(){

    Student s1;

    cout<<"Enter Student Data"<<endl;
    s1.accept();

    //Save object to file
    s1.writeFile();

    cout<<"\nData Saved to File"<<endl;

    Student s2;

    //Load object from file
    s2.readFile();

    cout<<"\nLoaded Student Data"<<endl;
    s2.display();

    return 0;
}