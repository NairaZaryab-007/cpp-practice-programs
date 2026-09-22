#include<iostream>
using namespace std;
class Shape{
    public:
    virtual double area()=0;

};
class Rectangle:public Shape{
    double l,w;
    public:
    Rectangle(double l,double w):l(l) ,w(w) {}
    double area() override{
        return l*w;
    }
};
   int main(){
    Rectangle r(3,3);
    cout<<"area of rectangle is  " << r.area() << endl;
    return 0;
   }