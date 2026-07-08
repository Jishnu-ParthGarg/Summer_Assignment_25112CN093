// Write a program to Check symmetric matrix.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter the size of square matrix: ";
    cin>>n;
    vector<vector<int>> mat(n, vector<int>(n));
    cout<<"Enter the elements of the matrix:"<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    bool isSymmetric=true;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(mat[i][j]!=mat[j][i]){
                isSymmetric=false;
                break;
            }
        }
        if(!isSymmetric){
            break;
        }
    }
    if(isSymmetric){
        cout<<"The matrix is symmetric."<<endl;
    } 
    else{
        cout<<"The matrix is not symmetric."<<endl;
    }
    return 0;
}