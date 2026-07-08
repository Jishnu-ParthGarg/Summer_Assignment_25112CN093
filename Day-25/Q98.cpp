//Write a program to Find common characters in strings.
#include <bits/stdc++.h>
using namespace std;
int main(){
    string str1,str2;
    cout<<"Enter first string: ";
    getline(cin,str1);
    cout<<"Enter second string: ";
    getline(cin,str2);
    int freq[256]={0};
    for(int i=0;i<str1.length();i++){
        freq[(int)str1[i]]++;
    }
    cout<<"Common characters: ";
    bool printed[256]={false};
    for(int i=0;i<str2.length();i++){
        if(freq[(int)str2[i]]>0 && !printed[(int)str2[i]]){
            cout<<str2[i]<<" ";
            printed[(int)str2[i]]=true;
        }
    }
    return 0;
}