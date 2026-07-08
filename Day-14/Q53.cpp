//Write a program to Linear search
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,i,key;
    cout<<"Enter size of array: ";
    cin>>n;
    int Arr[n];
    cout<<"Enter array elements:"<<endl;
    for(i=0;i<n;i++){
        cout<<"Enter Element "<<i+1<<": ";
        cin>>Arr[i];
    }
    cout<<"Enter element to search: ";
    cin>>key;
    bool found=false;
    for(i=0;i<n;i++){
        if(Arr[i]==key){
            cout<<"Element found at position "<<i+1<<endl;
            found=true;
            break;
        }
    }
    if(!found){
        cout<<"Element not found in the array."<<endl;
    }
    return 0;
}