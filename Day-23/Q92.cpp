//Write a program to Find maximum occurring character.
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
    int maxFreq=0;
    char maxChar='\0';
    for(int i=0;i<256;i++)
    {
        if(freq[i]>maxFreq)
        {
            maxFreq=freq[i];
            maxChar=(char)i;
        }
    }
    cout<<"Maximum occurring character = "<<maxChar<<endl;
    cout<<"Frequency = "<<maxFreq;
    return 0;
}