//Write a program to Check string rotation.
#include <bits/stdc++.h>
using namespace std;
int main(){
    string str1,str2;
    cout<<"Enter first string: ";
    getline(cin,str1);
    cout<<"Enter second string: ";
    getline(cin,str2);
    if(str1.length()!=str2.length()){
        cout<<"Not a rotation";
        return 0;
    }
    string temp=str1+str1;
    bool found=false;
    for(int i=0;i<=temp.length()-str2.length();i++){
        int j=0;
        while(j<str2.length() && temp[i+j]==str2[j]){
            j++;
        }
        if(j==str2.length()){
            found=true;
            break;
        }
    }
    if(found)
        cout<<"Strings are rotation of each other";
    else
        cout<<"Not a rotation";

    return 0;
}