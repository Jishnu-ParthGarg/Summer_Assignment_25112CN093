//Write a program to Sort words by length. 
#include <bits/stdc++.h>
using namespace std;
bool compare(string a,string b){
    return a.length()<b.length();
}
int main(){
    string str;
    cout<<"Enter string: ";
    getline(cin,str);
    vector<string> words;
    string word="";
    for(int i=0;i<=str.length();i++){
        if(i<str.length() && str[i]!=' '){
            word+=str[i];
        }
        else{
            if(word!=""){
                words.push_back(word);
                word="";
            }
        }
    }
    sort(words.begin(),words.end(),compare);
    cout<<"Words sorted by length:"<<endl;
    for(int i=0;i<words.size();i++){
        cout<<words[i]<<" ";
    }
    return 0;
}