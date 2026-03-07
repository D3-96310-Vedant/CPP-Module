/*18. Write a generic class for `Array` to store user-defined data types using templates.
Overload required operators. Prevent memory leakage.*/
#include<iostream>
using namespace std;

template<class T>
class Array{
private:
    T *arr;
    int size;

public:

    //Constructor
    Array(int s){
        size = s;
        arr = new T[size];
    }

    //Accept values
    void accept(){
        cout<<"Enter "<<size<<" elements:"<<endl;
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
    }

    //Display values
    void display(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    //Operator []
    T& operator[](int index){
        return arr[index];
    }

    //Destructor
    ~Array(){
        delete[] arr;
        cout<<"Memory Released"<<endl;
    }
};

int main(){

    int n;

    cout<<"Enter size of array : ";
    cin>>n;

    Array<int> a(n);

    a.accept();

    cout<<"Array Elements : ";
    a.display();

    cout<<"Element at index 2 : "<<a[2]<<endl;

    return 0;
}