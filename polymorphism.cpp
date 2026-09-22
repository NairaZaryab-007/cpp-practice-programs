#include<iostream>
using namespace std;
class Shape{
    public:
    virtual void area(){
        cout<<"shape area not defined"<<endl;
    }
};
class Circle:public Shape{
    public:
    void area() override{
        cout<<"area of circle is 3.14*r*r"<<endl;
    }
};
class Square:public Shape{
    public:
    void area() override{
        cout<<"area of square is side*side"<<endl;
    }
};
int main(){
    Shape *Shapes[2];
    Circle c;
    Square s;
    Shapes[0]=&c;
    Shapes[1]=&s;
    Shapes[0]->area();

    Shapes[1]->area();
    return 0;
}
