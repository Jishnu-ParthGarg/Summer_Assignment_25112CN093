//Write a program to Merge two sorted arrays
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter size of first array: ";
    cin>>n1;
    vector<int> a(n1);
    cout<<"Enter elements of first sorted array: ";
    for(int i=0;i<n1;i++){
        cin>>a[i];
    }
    cout<<"Enter size of second array: ";
    cin>>n2;
    vector<int> b(n2);
    cout<<"Enter elements of second sorted array: ";
    for(int i=0;i<n2;i++){
        cin>>b[i];
    }
    vector<int> c(n1+n2);
    merge(a.begin(), a.end(),
          b.begin(), b.end(),
          c.begin());
    cout<<"Merged array: ";
    for(int x : c){       //to print array,list or vectors
        cout<<x<<" ";
    }
    return 0;
}