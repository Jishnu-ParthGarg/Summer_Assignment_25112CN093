// Write a program to Multiply matrices.
#include <bits/stdc++.h>
using namespace std;
int main() {
    int rows1,cols1,rows2,cols2,i,j;
    cout<<"Enter the number of rows of first matrix: ";
    cin>>rows1;
    cout<<"Enter the number of columns of first matrix: ";
    cin>>cols1;
    cout<<"Enter the number of rows of second matrix: ";
    cin>>rows2;
    cout<<"Enter the number of columns of second matrix: ";
    cin>>cols2;
    if(cols1!=rows2){
        cout<<"Matrix multiplication is not possible."<<endl;
        return 0;
    }
    vector<vector<int>> mat1(rows1, vector<int>(cols1));
    vector<vector<int>> mat2(rows2, vector<int>(cols2));
    vector<vector<int>> product(rows1, vector<int>(cols2, 0));
    cout<<"Enter the elements of first matrix:"<<endl;
    for(i=0;i<rows1;i++){
        for(j=0;j<cols1;j++){
            cin>>mat1[i][j];
        }
    }
    cout<<"Enter the elements of second matrix:"<<endl;
    for(i=0;i<rows2;i++){
        for(j=0;j<cols2;j++){
            cin>>mat2[i][j];
        }
    }
    for(i=0;i<rows1;i++){
        for(j=0;j<cols2;j++){
            for(int k=0;k<cols1;k++){
                product[i][j] += mat1[i][k]*mat2[k][j];
            }
        }
    }
    cout<<"Product of the matrices:"<<endl;
    for(i=0;i<rows1;i++){
        for(j=0;j<cols2;j++){
            cout<<product[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}