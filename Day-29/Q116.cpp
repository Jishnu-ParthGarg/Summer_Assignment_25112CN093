//Write a program to Create inventory management system.
#include <bits/stdc++.h>
using namespace std;
struct Product{
    int id;
    string name;
    int quantity;
    float price;
};
int main(){
    int n;
    cout<<"Enter number of products: ";
    cin>>n;
    vector<Product> product(n);
    for(int i=0;i<n;i++){
        cout<<"\nEnter details of Product "<<i+1<<":\n";
        cout<<"Product ID: ";
        cin>>product[i].id;
        cin.ignore();
        cout<<"Product Name: ";
        getline(cin,product[i].name);
        cout<<"Quantity: ";
        cin>>product[i].quantity;
        cout<<"Price: ";
        cin>>product[i].price;
    }
    cout<<"\n===== INVENTORY REPORT =====\n";
    for(int i=0;i<n;i++){
        cout<<"Product ID: "<<product[i].id<<endl;
        cout<<"Product Name: "<<product[i].name<<endl;
        cout<<"Quantity: "<<product[i].quantity<<endl;
        cout<<"Price: "<<product[i].price<<endl;
        cout<<endl;
    }
    return 0;
}