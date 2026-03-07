#include <iostream>
using namespace std;
/*Q1. A shop sells book or tapes. The Book class holds id, title, author, and price; whereas Tape class
holds id, title, artist, and price. There is 5% discount on tapes, while 10% discount on books.
Assuming that each user purchase 3 products (either book or tape), calculate final bill. The program
should be menu driven and should not cause memory leakage.
Hint - Create class Product and inherit into Book and Tape. Also create array like Product* arr[3]*/
/* Base Class */
class Product
{
protected:
    int id;
    string title;
    double price;

public:
    virtual void accept()
    {
        cout << "Enter ID : ";
        cin >> id;

        cout << "Enter Title : ";
        cin >> title;

        cout << "Enter Price : ";
        cin >> price;
    }

    virtual double calculateDiscountedPrice() = 0;

    virtual void display()
    {
        cout << "ID : " << id << endl;
        cout << "Title : " << title << endl;
    }

    virtual ~Product() {}
};

/* Book Class */
class Book : public Product
{
    string author;

public:
    void accept()
    {
        Product::accept();

        cout << "Enter Author : ";
        cin >> author;
    }

    double calculateDiscountedPrice()
    {
        return price - (price * 0.10);
    }

    void display()
    {
        Product::display();
        cout << "Author : " << author << endl;
        cout << "Final Price (10% discount) : " << calculateDiscountedPrice() << endl;
    }
};

/* Tape Class */
class Tape : public Product
{
    string artist;

public:
    void accept()
    {
        Product::accept();

        cout << "Enter Artist : ";
        cin >> artist;
    }

    double calculateDiscountedPrice()
    {
        return price - (price * 0.05);
    }

    void display()
    {
        Product::display();
        cout << "Artist : " << artist << endl;
        cout << "Final Price (5% discount) : " << calculateDiscountedPrice() << endl;
    }
};

int main()
{

    Product *arr[3];
    int choice;

    for (int i = 0; i < 3; i++)
    {

        cout << "\n1. Book" << endl;
        cout << "2. Tape" << endl;
        cout << "Choose Product Type : ";
        cin >> choice;

        if (choice == 1)
            arr[i] = new Book();
        else
            arr[i] = new Tape();

        arr[i]->accept();
    }

    double totalBill = 0;

    cout << "\n----- BILL -----" << endl;

    for (int i = 0; i < 3; i++)
    {
        arr[i]->display();
        totalBill += arr[i]->calculateDiscountedPrice();
        cout << endl;
    }

    cout << "Total Bill : " << totalBill << endl;

    /* Prevent Memory Leak */
    for (int i = 0; i < 3; i++)
    {
        delete arr[i];
    }

    return 0;
}