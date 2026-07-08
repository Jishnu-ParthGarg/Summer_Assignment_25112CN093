//Write a program to Count even and odd elements.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,i,ec=0,oc=0;
    cout<<"Enter size of array : ";
    cin>>n;
    int Arr[n];
    cout<<"Enter The Elements OF array:"<<endl;
    for (i=0;i<n;i++)
    {
        cout<<"Enter Element "<<i+1<<":";
        cin>>Arr[i];
        if(Arr[i]%2==0){
            ec++;
        }
        else{
            oc++;
        }
    }
    cout<<"Numbers of Even Elements = "<<ec<<endl;
    cout<<"Numbers of Odd Elements = "<<oc<<endl;
    return 0;
}