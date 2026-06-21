//Write a program to Create library management system.
#include <bits/stdc++.h>
using namespace std;
struct Book{
    int id;
    string title;
    string author;
};
int main(){
    int n;
    cout<<"Enter number of books: ";
    cin>>n;
    vector<Book> books(n);
    for(int i=0;i<n;i++){
        cout<<"\nEnter details of Book "<<i+1<<":\n";
        cout<<"Book ID: ";
        cin>>books[i].id;
        cin.ignore();
        cout<<"Book Title: ";
        getline(cin,books[i].title);
        cout<<"Author Name: ";
        getline(cin,books[i].author);
    }
    cout<<"\n===== LIBRARY RECORDS =====\n";
    for(int i=0;i<n;i++){
        cout<<"Book ID: "<<books[i].id<<endl;
        cout<<"Title: "<<books[i].title<<endl;
        cout<<"Author: "<<books[i].author<<endl;
        cout<<endl;
    }
    return 0;
}