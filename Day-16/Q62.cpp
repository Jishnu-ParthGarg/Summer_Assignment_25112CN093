//Write a program to Find maximum frequency element.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int *arr=new int[n];
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int maxFreq=0, element;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j])
                count++;
        }
        if(count>maxFreq){
            maxFreq=count;
            element=arr[i];
        }
    }
    cout<<"Element with maximum frequency: "<<element<<endl;
    cout<<"Frequency: "<<maxFreq;
    delete[] arr;
    return 0;
}