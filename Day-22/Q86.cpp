//Write a program to Count words in a sentence.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string sentence;
    cout<<"Enter a sentence: ";
    getline(cin,sentence);
    int count=0;
    bool inWord=false;
    for(int i=0;i<sentence.length();i++)
    {
        if(sentence[i]!=' '&&inWord==false)
        {
            count++;
            inWord=true;
        }
        else if(sentence[i]==' ')
        {
            inWord=false;
        }
    }

    cout<<"Number of words = "<<count;
    return 0;
}

