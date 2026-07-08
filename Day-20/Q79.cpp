// Write a program to Find row-wise sum.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int rows,cols,i,j;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    cout<<"Enter the number of columns: ";
    cin>>cols;
    vector<vector<int>> mat(rows, vector<int>(cols));
    cout<<"Enter the elements of the matrix:"<<endl;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            cin>>mat[i][j];
        }
    }
    cout<<"Row-wise sums are:"<<endl;
    for(i=0;i<rows;i++){
        int sum=0;
        for(j=0;j<cols;j++){
            sum=sum+mat[i][j];
        }
        cout<<"Sum of row "<<i + 1<<" = "<<sum<<endl;
    }
    return 0;
}