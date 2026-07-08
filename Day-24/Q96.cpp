//Write a program to Remove duplicate characters.
#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter string: ";
    getline(cin,str);
    string result="";
    for(int i=0;i<str.length();i++){
        bool found=false;
        for(int j=0;j<result.length();j++){
            if(str[i]==result[j]){
                found=true;
                break;
            }
        }
        if(!found){
            result+=str[i];
        }
    }
    cout<<"After removing duplicates: "<<result;
    return 0;
}