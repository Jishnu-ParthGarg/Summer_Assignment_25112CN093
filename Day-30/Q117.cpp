//Write a program to Create student record system using arrays and strings.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of students: ";
    cin>>n;
    int roll[n];
    string name[n];
    float marks[n];
    cin.ignore();
    for(int i=0;i<n;i++){
        cout<<"\nEnter details of Student "<<i+1<<":\n";
        cout<<"Roll No: ";
        cin>>roll[i];
        cin.ignore();
        cout<<"Name: ";
        getline(cin,name[i]);
        cout<<"Marks: ";
        cin>>marks[i];
        cin.ignore();
    }
    cout<<"\n===== STUDENT RECORDS =====\n";
    for(int i=0;i<n;i++){
        cout<<"Roll No: "<<roll[i]<<endl;
        cout<<"Name: "<<name[i]<<endl;
        cout<<"Marks: "<<marks[i]<<endl;
        cout<<endl;
    }
    return 0;
}