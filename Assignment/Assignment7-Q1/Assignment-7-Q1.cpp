/*Q1. Provide menu driven code for the functionalities:
1. Add Manager
2. Add Salesman
3. Add Salesmanager
4. Display the count of all employees with respect to designation
5. Display All Managers
6. Display All Salesman
7. Display All SalesManagers
*/
#include<iostream>
#include<typeinfo>
using namespace std;

/* Base Class */
class Employee{
protected:
    int id;
    double salary;

public:
    virtual ~Employee(){}

    virtual void accept(){
        cout<<"Enter ID : ";
        cin>>id;

        cout<<"Enter Salary : ";
        cin>>salary;
    }

    virtual void display(){
        cout<<"ID : "<<id<<endl;
        cout<<"Salary : "<<salary<<endl;
    }
};

/* Manager Class */
class Manager : virtual public Employee{
protected:
    double bonus;

public:
    void accept(){
        Employee::accept();

        cout<<"Enter Bonus : ";
        cin>>bonus;
    }

    void display(){
        Employee::display();
        cout<<"Bonus : "<<bonus<<endl;
    }
};

/* Salesman Class */
class Salesman : virtual public Employee{
protected:
    double commission;

public:
    void accept(){
        Employee::accept();

        cout<<"Enter Commission : ";
        cin>>commission;
    }

    void display(){
        Employee::display();
        cout<<"Commission : "<<commission<<endl;
    }
};

/* SalesManager Class */
class SalesManager : public Manager , public Salesman{

public:

    void accept(){
        cout<<"Enter ID : ";
        cin>>id;

        cout<<"Enter Salary : ";
        cin>>salary;

        cout<<"Enter Bonus : ";
        cin>>bonus;

        cout<<"Enter Commission : ";
        cin>>commission;
    }

    void display(){
        cout<<"ID : "<<id<<endl;
        cout<<"Salary : "<<salary<<endl;
        cout<<"Bonus : "<<bonus<<endl;
        cout<<"Commission : "<<commission<<endl;
    }
};

/* Menu Function */
int menu(){
    int choice;

    cout<<"\n----- MENU -----"<<endl;
    cout<<"1 Add Manager"<<endl;
    cout<<"2 Add Salesman"<<endl;
    cout<<"3 Add SalesManager"<<endl;
    cout<<"4 Display All Employees"<<endl;
    cout<<"5 Display All Managers"<<endl;
    cout<<"6 Display All Salesmen"<<endl;
    cout<<"7 Display All SalesManagers"<<endl;
    cout<<"0 Exit"<<endl;

    cout<<"Enter choice : ";
    cin>>choice;

    return choice;
}

int main(){

    Employee* arr[10];
    int count = 0;
    int choice;

    while((choice = menu()) != 0){

        switch(choice){

        case 1:
            arr[count] = new Manager();
            arr[count]->accept();
            count++;
            break;

        case 2:
            arr[count] = new Salesman();
            arr[count]->accept();
            count++;
            break;

        case 3:
            arr[count] = new SalesManager();
            arr[count]->accept();
            count++;
            break;

        case 4:
            cout<<"\n--- All Employees ---\n";
            for(int i=0;i<count;i++){
                arr[i]->display();
                cout<<endl;
            }
            break;

        case 5:
            cout<<"\n--- Managers ---\n";
            for(int i=0;i<count;i++){
                Manager* m = dynamic_cast<Manager*>(arr[i]);
                if(m && typeid(*arr[i]) == typeid(Manager))
                    m->display();
            }
            break;

        case 6:
            cout<<"\n--- Salesmen ---\n";
            for(int i=0;i<count;i++){
                Salesman* s = dynamic_cast<Salesman*>(arr[i]);
                if(s && typeid(*arr[i]) == typeid(Salesman))
                    s->display();
            }
            break;

        case 7:
            cout<<"\n--- SalesManagers ---\n";
            for(int i=0;i<count;i++){
                SalesManager* sm = dynamic_cast<SalesManager*>(arr[i]);
                if(sm)
                    sm->display();
            }
            break;

        default:
            cout<<"Invalid choice"<<endl;
        }
    }

    /* Free Memory */
    for(int i=0;i<count;i++){
        delete arr[i];
    }

    return 0;
}