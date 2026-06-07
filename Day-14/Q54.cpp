//Write a program to Frequency of an element.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,key,count=0;
    cout<<"Enter size of array: ";
    cin>>n;
    int Arr[n];
    cout<<"Enter array elements:"<<endl;
    for(int i=0;i<n;i++){
        cout<<"Enter Element "<<i+1<<": ";
        cin>>Arr[i];
    }
    cout<<"Enter element whose frequency is to be found: ";
    cin>>key;
    for(int i=0;i<n;i++){
        if(Arr[i]==key){
            count++;
        }
    }
    cout<<"Frequency of "<<key<<" = "<<count<<endl;
    return 0;
}