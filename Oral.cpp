#include<iostream>
using namespace std;
class Rectangle{
    private:
    double length,width;

   public:

    Rectangle(double l, double w) : length(l), width(w) {}
    double area(){
        return length*width;
    }
};
    int main(){
        Rectangle r(4,4);
        cout<<"area "<<r.area();
        return 0;
    }