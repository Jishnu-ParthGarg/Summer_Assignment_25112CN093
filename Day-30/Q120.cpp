//Write a program to Develop complete mini project using arrays, strings and functions.
//Student Record Management System
#include <bits/stdc++.h>
using namespace std;
const int MAX = 100;
int roll[MAX];
string name[MAX];
float marks[MAX];
int countStudent = 0;
void addStudent(){
    cout<<"Enter Roll No: ";
    cin>>roll[countStudent];
    cin.ignore();
    cout<<"Enter Name: ";
    getline(cin,name[countStudent]);
    cout<<"Enter Marks: ";
    cin>>marks[countStudent];
    countStudent++;
    cout<<"Student Added Successfully.\n";
}
void displayStudents(){
    if(countStudent==0){
        cout<<"No Records Found.\n";
        return;
    }
    cout<<"\n===== STUDENT RECORDS =====\n";
    for(int i=0;i<countStudent;i++){
        cout<<"Roll No: "<<roll[i]<<endl;
        cout<<"Name: "<<name[i]<<endl;
        cout<<"Marks: "<<marks[i]<<endl;
        cout<<endl;
    }
}
void searchStudent(){
    int r;
    bool found=false;
    cout<<"Enter Roll No to Search: ";
    cin>>r;
    for(int i=0;i<countStudent;i++){
        if(roll[i]==r){
            cout<<"Record Found\n";
            cout<<"Roll No: "<<roll[i]<<endl;
            cout<<"Name: "<<name[i]<<endl;
            cout<<"Marks: "<<marks[i]<<endl;
            found=true;
            break;
        }
    }
    if(!found)
        cout<<"Record Not Found.\n";
}
int main(){
    int choice;
    do{
        cout<<"\n===== STUDENT MANAGEMENT SYSTEM =====\n";
        cout<<"1. Add Student\n";
        cout<<"2. Display Students\n";
        cout<<"3. Search Student\n";
        cout<<"4. Exit\n";
        cout<<"Enter Choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                cout<<"Exiting...\n";
                break;
            default:
                cout<<"Invalid Choice.\n";
        }
    }while(choice!=4);
    return 0;
}