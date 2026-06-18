//Write a program to Character frequency
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
    cout<<"Character Frequencies:\n";
    for(int i=0;i<256;i++)
    {
        if(freq[i]>0&&i!=' ')
        {
            cout<<(char)i<<" = "<<freq[i]<<endl;
        }
    }
    return 0;
}