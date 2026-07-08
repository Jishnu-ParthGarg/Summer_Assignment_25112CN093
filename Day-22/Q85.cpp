//Write a program to Check palindrome string
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    int start=0;
    int end=str.length()-1;
    bool isPalindrome=true;
    while(start<end)
    {
        if(str[start]!=str[end])
        {
            isPalindrome=false;
            break;
        }
        start++;
        end--;
    }
    if(isPalindrome)
        cout<<"String is Palindrome";
    else
        cout<<"String is NOT Palindrome";

    return 0;
}