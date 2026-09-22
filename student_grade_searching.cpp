#include<iostream>
using namespace std;
class Student {
    private:
    string name;
    int marks;
    public:
    Student(string n, int m) {
        name=n;
        marks=m;
    }
   void showgrade(){
    cout<<" Student Name:     "<<name<<endl;
    cout<<"Marks:    "<<marks<<endl;
   char grade;
    if(marks>=90)
     grade ='A';
     else if(marks>=80)
     grade ='B';
     else if(marks>=70)
     grade ='C';
     else if(marks>=60)
        grade ='D';
        else
        grade ='F';
        cout<<"Grade:    "<<grade<<endl;
   }
};   
   int main(){
    Student s1("John", 85);
        s1.showgrade();
        return 0;
   }