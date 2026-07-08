//Write a program to Find first non-repeating character.
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
        if(freq[(int)str[i]]==1)
        {
            result=str[i];
            found=true;
            break;
        }
    }
    if(found)
        cout<<"First non-repeating character = "<<result;
    else
        cout<<"No non-repeating character found";
    return 0;
}