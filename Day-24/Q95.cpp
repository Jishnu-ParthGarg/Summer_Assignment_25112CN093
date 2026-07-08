//Write a program to Find longest word.
#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter string: ";
    getline(cin,str);
    string word="", longest="";
    for(int i=0;i<=str.length();i++){
        if(i<str.length() && str[i]!=' '){
            word+=str[i];
        }
        else{
            if(word.length()>longest.length()){
                longest=word;
            }
            word="";
        }
    }
    cout<<"Longest word: "<<longest;
    return 0;
}