#include<iostream>
using namespace std;
void displayHeader(){
    cout<<"==============================="<<endl;
    cout<<"BIG BRAINS PORTAL"<<endl;
    cout<<"==============================="<<endl;
}
float calculateAverage(float totalMarks,int numSubjects)
{
    float average= totalMarks/numSubjects;
    return average;
    
}
void displayresult(string name, float average)
{
    cout<<"Student Name: "<<name<<endl;
    cout<<"Average Marks: "<<average<<endl;
    if(average>=50)
    {
        cout<<"Result: Pass"<<endl;
    }
    else
    {
        cout<<"Result: Fail"<<endl;
    }
}
int main(){
    displayHeader();
    string Studentname;
    float totalMarks=0;
    int numSubjects;
    int marks;
    cout<<"Enter student name: ";
    cin>>Studentname;
    
    cout<<"Enter number of subjects: ";
    cin>>numSubjects;
   for(int i=1;i<=numSubjects;i++){
    cout<<"Enter marks for subject "<<i<<": ";
    cin>>marks;
    totalMarks += marks;
   }
    float average = calculateAverage(totalMarks, numSubjects);
    displayresult(Studentname, average);
}