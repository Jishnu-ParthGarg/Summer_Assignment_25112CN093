//Write a program to Create employee management system.
#include <bits/stdc++.h>
using namespace std;
struct Employee{
    int id;
    string name;
    float salary;
};
int main(){
    int n;
    cout<<"Enter number of employees: ";
    cin>>n;
    vector<Employee> emp(n);
    for(int i=0;i<n;i++){
        cout<<"\nEnter details of Employee "<<i+1<<":\n";
        cout<<"Employee ID: ";
        cin>>emp[i].id;
        cin.ignore();
        cout<<"Employee Name: ";
        getline(cin,emp[i].name);
        cout<<"Salary: ";
        cin>>emp[i].salary;
    }
    cout<<"\n===== EMPLOYEE RECORDS =====\n";
    for(int i=0;i<n;i++){
        cout<<"Employee ID: "<<emp[i].id<<endl;
        cout<<"Employee Name: "<<emp[i].name<<endl;
        cout<<"Salary: "<<emp[i].salary<<endl;
        cout<<endl;
    }
    return 0;
}