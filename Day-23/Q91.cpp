//Write a program to Check anagram strings
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1,str2;
    cout<<"Enter first string: ";
    getline(cin,str1);
    cout<<"Enter second string: ";
    getline(cin,str2);
    if(str1.length()!=str2.length())
    {
        cout<<"Not Anagram";
        return 0;
    }
    int freq[256]={0};
    for(int i=0;i<str1.length();i++)
    {
        freq[(int)str1[i]]++;
    }
    for(int i=0;i<str2.length();i++)
    {
        freq[(int)str2[i]]--;
    }
    for(int i=0;i<256;i++)
    {
        if(freq[i]!=0)
        {
            cout<<"Not Anagram";
            return 0;
        }
    }
    cout<<"Anagram";
    return 0;
}
