/*Q1. Write a class to find volume of a Cylinder by using following members. (volume of
Cylinder=3.14 * radius * radius *height) ( use static wherever needed. hint-PI)
Class having following member functions:
Cylinder()
Cylinder(double radius, double height)
getRadius()
setRadius()
getHeight()
setHeight()
calculateVolume()
Initialize members using constructor member initializer list.*/
#include<iostream>
using namespace std;
class Cylinder{
    private:
   double radius;
    double height;
   static const double PI; 
   public:
//    Cylinder(){
//     height=0;
//     radius=0; 
//    }
   Cylinder ():radius(0),height(0)
   { }
   Cylinder(double h,double r):radius(r),height(h)
   { }
double getRadius(){
    return radius;
}
void setRadius(double r){
   // this->radius=r;
   radius=r;
}
double getHeight(){
    return height;
}
void setHeight(double h){
    height=h;
}
double calculateVolume(){
    return (radius*radius*height*PI);
}
};
const double Cylinder::PI = 3.14;
int main(){
    Cylinder c1;
    Cylinder c3(5,8);
    cout<<"\nVolume c1:"<<c1.calculateVolume();
    cout<<"\nVolume c3:"<< c3.calculateVolume();
    c1.setRadius(5);
    c1.setHeight(10);
    cout<<"\nVolume c1:"<<c1.calculateVolume(); 
    c3.setRadius(10);
    cout<<"\nVolume c3:"<< c3.calculateVolume();

    Cylinder c2;
    c2.setRadius(5);
    c2.setHeight(12);
    cout<<" \nc2 Radius :"<<c2.getRadius();
    cout<<" \nc2 Height :"<<c2.getHeight();
    cout<<"\n c2 Volume :"<<c2.calculateVolume();




}
