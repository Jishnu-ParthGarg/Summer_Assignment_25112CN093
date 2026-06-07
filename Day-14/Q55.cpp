//Write a program to Second largest element.
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,i;
    cout<<"Enter size of array: ";
    cin>>n;
    int Arr[n];
    cout<<"Enter array elements:"<<endl;
    for(i=0;i<n;i++){
        cin>>Arr[i];
    }
    int lar=Arr[0];
    int secLar=Arr[0];
    for(i=0;i<n;i++){
        if(Arr[i]>lar){
            secLar=lar;
            lar=Arr[i];
        }
        else if(Arr[i]>secLar&&Arr[i]!=lar){
            secLar=Arr[i];
        }
    }
    cout<<"Second Largest Element = "<<secLar<<endl;
    return 0;
}