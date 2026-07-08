//Write a program to Find duplicates in array
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,k;
    cout<<"Enter size of array:";
    cin>>n;
    int Arr[n];
    cout<<"Enter array elements:"<<endl;
    for(int i=0;i<n;i++){
        cout<<"Enter Element "<<i+1<<":";
        cin>>Arr[i];
    }
    cout<<"Duplicate Elements:";
    bool found=false;
    for(i=0;i<n;i++){
        bool alP=false;
        for(k=0;k<i;k++){
            if(Arr[i]==Arr[k]){
                alP=true;
                break;
            }
        }
        if(alP)
            continue;
        for(j=i+1;j<n;j++){
            if(Arr[i]==Arr[j]){
                cout<<Arr[i]<<" ";
                found=true;
                break;
            }
        }
    }
    if(!found)
        cout<<"None";
    cout<<endl;
    return 0;
}