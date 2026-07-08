//Write a program to Remove spaces from string.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    string result="";
    for(int i=0;i<str.length();i++)
    {
        if(str[i]!=' ')
        {
            result=result+str[i];
        }
    }
    cout<<"String after removing spaces: ";
    cout<<result;
    return 0;
}