//Write a program to Find first repeating character.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    int freq[256]={0};
    for(int i=0;i<str.length();i++)
    {
        freq[(int)str[i]]++;
    }
    char result='\0';
    bool found=false;
    for(int i=0;i<str.length();i++)
    {
        if(freq[(int)str[i]]>1)
        {
            result=str[i];
            found=true;
            break;
        }
    }
    if(found)
        cout<<"First repeating character = "<<result;
    else
        cout<<"No repeating character found";
    return 0;
}