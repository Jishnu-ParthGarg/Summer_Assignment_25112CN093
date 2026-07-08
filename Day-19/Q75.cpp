// Write a program to Transpose a matrix.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int rows,cols,i,j;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    cout<<"Enter the number of columns: ";
    cin>>cols;
    vector<vector<int>> mat(rows,vector<int>(cols));
    vector<vector<int>> transpose(cols,vector<int>(rows));
    cout<<"Enter the elements of the matrix:"<<endl;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            cin>>mat[i][j];
        }
    }
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            transpose[j][i]=mat[i][j];
        }
    }
    cout<<"Transpose of the matrix:"<<endl;
    for(i=0;i<cols;i++){
        for(j=0;j<rows;j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}