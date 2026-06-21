//Write a program to Create salary management system.
#include <bits/stdc++.h>
using namespace std;
struct Employee{
    int id;
    string name;
    float basicSalary;
    float bonus;
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
        cout<<"Basic Salary: ";
        cin>>emp[i].basicSalary;
        cout<<"Bonus: ";
        cin>>emp[i].bonus;
    }
    cout<<"\n===== SALARY REPORT =====\n";
    for(int i=0;i<n;i++){
        float netSalary=emp[i].basicSalary+emp[i].bonus;
        cout<<"Employee ID: "<<emp[i].id<<endl;
        cout<<"Name: "<<emp[i].name<<endl;
        cout<<"Net Salary: "<<netSalary<<endl;
        cout<<endl;
    }
    return 0;
}