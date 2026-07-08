//Write a program to Create mini library system.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of books: ";
    cin>>n;
    string books[n];
    cin.ignore();
    cout<<"Enter book names:\n";
    for(int i=0;i<n;i++){
        getline(cin,books[i]);
    }
    cout<<"\n===== BOOK LIST =====\n";
    for(int i=0;i<n;i++){
        cout<<i+1<<". "<<books[i]<<endl;
    }
    string searchBook;
    cout<<"\nEnter book name to search: ";
    getline(cin,searchBook);
    bool found=false;
    for(int i=0;i<n;i++){
        if(books[i]==searchBook){
            found=true;
            break;
        }
    }
    if(found)
        cout<<"Book Available"<<endl;
    else
        cout<<"Book Not Available"<<endl;
    return 0;
}