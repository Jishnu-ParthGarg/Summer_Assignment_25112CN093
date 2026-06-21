//Write a program to Create mini employee management system.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of employees: ";
    cin>>n;
    int id[n];
    string name[n];
    float salary[n];
    cin.ignore();
    for(int i=0;i<n;i++){
        cout<<"\nEnter details of Employee "<<i+1<<":\n";
        cout<<"Employee ID: ";
        cin>>id[i];
        cin.ignore();
        cout<<"Employee Name: ";
        getline(cin,name[i]);
        cout<<"Salary: ";
        cin>>salary[i];
        cin.ignore();
    }
    cout<<"\n===== EMPLOYEE RECORDS =====\n";
    for(int i=0;i<n;i++){
        cout<<"Employee ID: "<<id[i]<<endl;
        cout<<"Employee Name: "<<name[i]<<endl;
        cout<<"Salary: "<<salary[i]<<endl;
        cout<<endl;
    }
    return 0;
}