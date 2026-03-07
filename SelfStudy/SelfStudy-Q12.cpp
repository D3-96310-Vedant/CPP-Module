/*12. Implement a `Product` (fields: title, price & virtual methods accept() & display()) class
with derived classes `Book` (fields: pages) and `Tape` (fields: playtime). Create an array of 5
Product pointers and initialize it with Product & Tape objects as follows. Write a loop to
display only pages and playtime values.

 Product *arr = new Product*[5];
 for(int i=0; i<5; i++) {
 cout << "1. Book, 2. Tape, Enter choice: ";
 cin >> choice;
 switch(choice) {
 case 1:
 arr[i] = new Book;
 arr[i]->accept();
 break;
 case 2:
 arr[i] = new Tape;
 arr[i]->accept();
 break;
 }
 }*/
#include<iostream>
using namespace std;

class Product{
protected:
    string title;
    double price;

public:

    virtual void accept(){
        cout<<"Enter Title : ";
        cin>>title;

        cout<<"Enter Price : ";
        cin>>price;
    }

    virtual void display(){
        cout<<"Title : "<<title<<endl;
        cout<<"Price : "<<price<<endl;
    }

    virtual ~Product(){}
};


class Book : public Product{
private:
    int pages;

public:

    void accept(){
        Product::accept();

        cout<<"Enter Pages : ";
        cin>>pages;
    }

    void display(){
        cout<<"Pages : "<<pages<<endl;
    }
};


class Tape : public Product{
private:
    int playtime;

public:

    void accept(){
        Product::accept();

        cout<<"Enter Playtime : ";
        cin>>playtime;
    }

    void display(){
        cout<<"Playtime : "<<playtime<<endl;
    }
};


int main(){

    Product *arr[5];
    int choice;

    for(int i=0;i<5;i++){

        cout<<"1. Book, 2. Tape, Enter choice : ";
        cin>>choice;

        switch(choice){

            case 1:
                arr[i] = new Book();
                arr[i]->accept();
                break;

            case 2:
                arr[i] = new Tape();
                arr[i]->accept();
                break;
        }
    }

    cout<<"\nDisplaying Pages / Playtime\n";

    for(int i=0;i<5;i++){
        arr[i]->display();
        cout<<endl;
    }

    //Free memory
    for(int i=0;i<5;i++){
        delete arr[i];
    }

    return 0;
}