// Write a program to Reverse a string.
#include <bits/stdc++.h>
using namespace std;
int main(){
    char str[100];
    cout<<"Enter a string: ";
    cin.getline(str,100);
    int length=0;
    while(str[length]!='\0'){
        length++;
    }
    for(int i=0;i<length/2;i++){
        swap(str[i],str[length-i-1]);
    }
    cout<<"Reversed string: "<<str<<endl;
    return 0;
}