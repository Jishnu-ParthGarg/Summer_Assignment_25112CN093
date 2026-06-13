//Write a program to Union of arrays.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter the size of first array: ";
    cin>>n1;
    int *arr1=new int[n1];
    cout<<"Enter the elements of first array: ";
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    cout<<"Enter the size of second array: ";
    cin>>n2;
    int *arr2=new int[n2];
    cout<<"Enter the elements of second array: ";
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    int *unionArr=new int[n1+n2];
    int k=0;
    for(int i=0;i<n1;i++){
        bool found=false;
        for(int j=0;j<k;j++){
            if(arr1[i]==unionArr[j]) {
                found=true;
                break;
            }
        }
        if(!found){
            unionArr[k]=arr1[i];
            k++;
        }
    }
    for(int i=0;i<n2;i++){
        bool found=false;
        for(int j=0;j<k;j++){
            if(arr2[i]==unionArr[j]) {
                found=true;
                break;
            }
        }
        if(!found){
            unionArr[k]=arr2[i];
            k++;
        }
    }
    cout<<"Union of arrays: ";
    for(int i=0;i<k;i++){
        cout<<unionArr[i]<<" ";
    }
    delete[] arr1;
    delete[] arr2;
    delete[] unionArr;
    return 0;
}