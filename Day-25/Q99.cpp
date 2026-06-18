//Write a program to Sort names alphabetically.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of names: ";
    cin>>n;
    cin.ignore(); // to clear buffer
    vector<string> names(n);
    cout<<"Enter names:"<<endl;
    for(int i=0;i<n;i++){
        getline(cin,names[i]);
    }
    sort(names.begin(), names.end());
    cout<<"Sorted names:"<<endl;
    for(int i=0;i<n;i++){
        cout<<names[i]<<endl;
    }
    return 0;
}