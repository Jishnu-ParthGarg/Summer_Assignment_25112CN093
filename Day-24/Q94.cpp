//Write a program to Compress a string. 
#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter string: ";
    getline(cin,str);
    string result="";
    for(int i=0;i<str.length();i++){
        int count=1;
        while(i+1<str.length() && str[i]==str[i+1]){
            count++;
            i++;
        }
        result.push_back(str[i]);
        result+=to_string(count);
    }
    cout<<"Compressed string: "<<result;
    return 0;
}