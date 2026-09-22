#include<iostream>
using namespace std;
class Vehicle{
    public:
    virtual void move(){
        cout<<"Vehicle moves"<<endl;
    }
};
class Car:public Vehicle{
    public:
    void move() override{
        cout<<"Car drives"<<endl;
    }
};
class Boat:public Vehicle{
    public:
    void move() override{
        cout<<"Boat sails"<<endl;
    }

};
int main(){
    Vehicle*v1=new Car();
    Vehicle*v2=new Boat();
    v1 ->move();
    v2 ->move();
    return 0;
}