//Write a program to Create menu-driven string operations system.
#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    int choice;
    do{
        cout<<"\n===== STRING OPERATIONS MENU =====\n";
        cout<<"1. Find Length\n";
        cout<<"2. Reverse String\n";
        cout<<"3. Convert to Uppercase\n";
        cout<<"4. Check Palindrome\n";
        cout<<"5. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:{
                int len=0;
                while(str[len]!='\0'){
                    len++;
                }
                cout<<"Length = "<<len<<endl;
                break;
            }
            case 2:{
                cout<<"Reversed String: ";
                for(int i=str.length()-1;i>=0;i--){
                    cout<<str[i];
                }
                cout<<endl;
                break;
            }
            case 3:{
                string temp=str;
                for(int i=0;i<temp.length();i++){
                    if(temp[i]>='a' && temp[i]<='z'){
                        temp[i]=temp[i]-32;
                    }
                }
                cout<<"Uppercase String: "<<temp<<endl;
                break;
            }
            case 4:{
                bool palindrome=true;
                for(int i=0,j=str.length()-1;i<j;i++,j--){
                    if(str[i]!=str[j]){
                        palindrome=false;
                        break;
                    }
                }
                if(palindrome)
                    cout<<"Palindrome String"<<endl;
                else
                    cout<<"Not a Palindrome String"<<endl;
                break;
            }
            case 5:
                cout<<"Exiting..."<<endl;
                break;
            default:
                cout<<"Invalid Choice!"<<endl;
        }
    }while(choice!=5);
    return 0;
}