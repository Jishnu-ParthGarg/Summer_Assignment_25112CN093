// Write a program to Add matrices using vectors.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int rows,cols,i,j;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    cout<<"Enter the number of columns: ";
    cin>>cols;
    vector<vector<int>> mat1(rows,vector<int>(cols));
    vector<vector<int>> mat2(rows,vector<int>(cols));
    vector<vector<int>> sum(rows,vector<int>(cols));
    cout<<"Enter the elements of first matrix:"<<endl;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            cin>>mat1[i][j];
        }
    }
    cout<<"Enter the elements of second matrix:"<<endl;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            cin>>mat2[i][j];
        }
    }
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            sum[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    cout<<"Sum of the matrices:"<<endl;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}