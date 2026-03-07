/*10. Implement a `Matrix` class and overload `+`, `-`, and `*` operators.*/
#include<iostream>
using namespace std;

class Matrix{
private:
    int a[2][2];

public:

    void accept(){
        cout<<"Enter Matrix Elements (2x2)"<<endl;

        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                cin>>a[i][j];
            }
        }
    }

    void display(){
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    //Operator +
    Matrix operator+(Matrix m){
        Matrix temp;

        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                temp.a[i][j] = a[i][j] + m.a[i][j];
            }
        }

        return temp;
    }

    //Operator -
    Matrix operator-(Matrix m){
        Matrix temp;

        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                temp.a[i][j] = a[i][j] - m.a[i][j];
            }
        }

        return temp;
    }

    //Operator *
    Matrix operator*(Matrix m){
        Matrix temp;

        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                temp.a[i][j] = 0;

                for(int k=0;k<2;k++){
                    temp.a[i][j] += a[i][k] * m.a[k][j];
                }
            }
        }

        return temp;
    }
};

int main(){

    Matrix m1,m2,m3;

    cout<<"Enter First Matrix"<<endl;
    m1.accept();

    cout<<"Enter Second Matrix"<<endl;
    m2.accept();

    cout<<"\nMatrix Addition"<<endl;
    m3 = m1 + m2;
    m3.display();

    cout<<"\nMatrix Subtraction"<<endl;
    m3 = m1 - m2;
    m3.display();

    cout<<"\nMatrix Multiplication"<<endl;
    m3 = m1 * m2;
    m3.display();

    return 0;
}