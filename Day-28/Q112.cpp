//Write a program to Create contact management system.
#include <bits/stdc++.h>
using namespace std;
struct Contact{
    string name;
    string phone;
};
int main(){
    int n;
    cout<<"Enter number of contacts: ";
    cin>>n;
    cin.ignore();
    vector<Contact> contacts(n);
    for(int i=0;i<n;i++){
        cout<<"\nEnter details of Contact "<<i+1<<":\n";
        cout<<"Name: ";
        getline(cin,contacts[i].name);
        cout<<"Phone Number: ";
        getline(cin,contacts[i].phone);
    }
    cout<<"\n===== CONTACT LIST =====\n";
    for(int i=0;i<n;i++){
        cout<<"Name: "<<contacts[i].name<<endl;
        cout<<"Phone Number: "<<contacts[i].phone<<endl;
        cout<<endl;
    }
    return 0;
}