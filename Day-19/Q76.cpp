// Write a program to Find diagonal sum.
#include <bits/stdc++.h>
using namespace std;

int main() {
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
    int diaSum=0;
    for(i=0;i<n;i++){
        diaSum=diaSum+mat[i][i];
    }
    cout<<"Diagonal sum = "<<diaSum<<endl;
    return 0;
}