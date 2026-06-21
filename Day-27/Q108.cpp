//Write a program to Create marksheet generation system.
#include <bits/stdc++.h>
using namespace std;
int main(){
    string name;
    int marks[5];
    int total=0;
    float percentage;
    cout<<"Enter Student Name: ";
    getline(cin,name);
    cout<<"Enter marks of 5 subjects:\n";
    for(int i=0;i<5;i++){
        cin>>marks[i];
        total+=marks[i];
    }
    percentage=total/5.0;
    char grade;
    if(percentage>=90)
        grade='A';
    else if(percentage>=75)
        grade='B';
    else if(percentage>=60)
        grade='C';
    else if(percentage>=40)
        grade='D';
    else
        grade='F';
    cout<<"\n===== MARKSHEET =====\n";
    cout<<"Name: "<<name<<endl;
    cout<<"Total Marks: "<<total<<"/500"<<endl;
    cout<<"Percentage: "<<percentage<<"%"<<endl;
    cout<<"Grade: "<<grade<<endl;
    return 0;
}