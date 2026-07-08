//Write a program to Create student record management system.
#include <bits/stdc++.h>
using namespace std;
struct Student{
    int rollNo;
    string name;
    float marks;
};
int main(){
    int n;
    cout<<"Enter number of students: ";
    cin>>n;
    vector<Student> students(n);
    for(int i=0;i<n;i++){
        cout<<"\nEnter details of Student "<<i+1<<":\n";
        cout<<"Roll No: ";
        cin>>students[i].rollNo;
        cin.ignore();
        cout<<"Name: ";
        getline(cin,students[i].name);
        cout<<"Marks: ";
        cin>>students[i].marks;
    }
    cout<<"\n===== STUDENT RECORDS =====\n";
    for(int i=0;i<n;i++){
        cout<<"Roll No: "<<students[i].rollNo<<endl;
        cout<<"Name: "<<students[i].name<<endl;
        cout<<"Marks: "<<students[i].marks<<endl;
        cout<<endl;
    }
    return 0;
}