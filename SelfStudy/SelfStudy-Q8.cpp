/*8. Create class Programmer and class Teacher, both containing a function work(). Derive
class ProgrammingTeacher from both classes. Create an object of ProgrammingTeacher and
call work() to show ambiguity. Resolve the ambiguity using scope resolution operator. Add
`cout` statements in constructors to confirm constructor calling sequence.*/
#include<iostream>
using namespace std;

class Programmer{
public:

    Programmer(){
        cout<<"Programmer Constructor Called"<<endl;
    }

    void work(){
        cout<<"Programmer is coding"<<endl;
    }
};

class Teacher{
public:

    Teacher(){
        cout<<"Teacher Constructor Called"<<endl;
    }

    void work(){
        cout<<"Teacher is teaching"<<endl;
    }
};

class ProgrammingTeacher : public Programmer , public Teacher{
public:

    ProgrammingTeacher(){
        cout<<"ProgrammingTeacher Constructor Called"<<endl;
    }
};

int main(){

    ProgrammingTeacher pt;

    cout<<"\nResolving Ambiguity\n";

    //Using scope resolution
    pt.Programmer::work();
    pt.Teacher::work();

    return 0;
}