//Write a program to Binary search.
#include <iostream>
using namespace std;
int main(){
    int n,key;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the sorted array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to search: ";
    cin>>key;
    int low=0,high=n-1;
    int mid,position=-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key){
            position=mid;
            break;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(position!=-1){
        cout<<"Element found at index "<<position;
    }
    else{
        cout<<"Element not found";
    }
    return 0;
}