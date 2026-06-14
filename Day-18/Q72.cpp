//Write a program to Sort array in descending order.
#include <iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    cout<<"Array after sorting in descending order: ";
    for (i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}