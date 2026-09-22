#include<iostream>
using namespace std;

class Account{
    private:
    double balance;
public:
    Account(double initial){

    balance=initial;
    }
    void deposit(double amount){
        balance=balance+amount;
    }
    double getbalance(){
        return balance;
    }


   
};

int main() {
    Account a(1000);
    a.deposit(500);
    cout<< a.getbalance()<<endl;
    return 0;
}