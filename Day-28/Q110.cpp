//Write a program to Create bank account system
#include <bits/stdc++.h>
using namespace std;
struct BankAccount{
    int accountNo;
    string name;
    double balance;
};
int main(){
    BankAccount acc;
    cout<<"Enter Account Number: ";
    cin>>acc.accountNo;
    cin.ignore();
    cout<<"Enter Account Holder Name: ";
    getline(cin,acc.name);
    cout<<"Enter Initial Balance: ";
    cin>>acc.balance;
    int choice;
    double amount;
    do{
        cout<<"\n===== BANK MENU =====\n";
        cout<<"1. Deposit\n";
        cout<<"2. Withdraw\n";
        cout<<"3. Display Account\n";
        cout<<"4. Exit\n";
        cout<<"Enter choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter amount to deposit: ";
                cin>>amount;
                acc.balance=acc.balance+amount;
                cout<<"Deposit successful.\n";
                break;
            case 2:
                cout<<"Enter amount to withdraw: ";
                cin>>amount;
                if(amount<=acc.balance){
                    acc.balance=acc.balance-amount;
                    cout<<"Withdrawal successful.\n";
                }
                else{
                    cout<<"Insufficient balance.\n";
                }
                break;
            case 3:
                cout<<"\nAccount Number: "<<acc.accountNo<<endl;
                cout<<"Account Holder: "<<acc.name<<endl;
                cout<<"Balance: "<<acc.balance<<endl;
                break;
            case 4:
                cout<<"Thank you.\n";
                break;
            default:
                cout<<"Invalid choice.\n";
        }
    }while(choice!=4);
    return 0;
}