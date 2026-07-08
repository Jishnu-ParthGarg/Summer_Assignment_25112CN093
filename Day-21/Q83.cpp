// Write a program to Count vowels and consonants.
#include <bits/stdc++.h>
using namespace std;
int main(){
    char str[100];
    int vowels=0,cons=0;
    cout<<"Enter a string: ";
    cin.getline(str,100);
    for(int i=0;str[i]!='\0';i++){
        char ch=tolower(str[i]);
        if(ch>='a'&&ch<='z'){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                vowels++;
            }
            else{
                cons++;
            }
        }
    }
    cout<<"Number of vowels = "<<vowels<<endl;
    cout<<"Number of consonants = "<<cons<<endl;
    return 0;
}