//Write a program to Find largest and smallest element.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,i,max_Val,min_Val;
    cout<<"Enter size of array : ";
    cin>>n;
    int Arr[n];
    cout<<"Enter The Elements OF array:"<<endl;
    for (i=0;i<n;i++)
    {
        cout<<"Enter Element "<<i+1<<":";
        cin>>Arr[i];
    }
    max_Val=Arr[0];
    min_Val=Arr[0];
    for(i=0;i<n;i++){
        if(Arr[i]>max_Val){
            max_Val=Arr[i];
        }
        if(Arr[i]<min_Val){
            min_Val=Arr[i];
        }
    }
    cout<<"Largest Element= "<<max_Val<<endl;
    cout<<"Smallest Element= "<<min_Val<<endl;
    return 0;
}