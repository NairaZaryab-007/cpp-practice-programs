#include<iostream>
using namespace std;
int main(){
    int i=1;
     int sum=0;
    do{
        sum=sum+i;
        i++;
        cout<<"  "<<sum<<endl;
    }while(i<=10);
    cout<<"Sum of numbers from 1 to 10 is: "<<sum<<endl;
}