//Write a program to Print Armstrong numbers in a range.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a1,a2,d,c,r,i,a;
    cout<<"Enter The End Limit Of range: ";
    cin>>n;
    for (i=1;i<=n;i++)
    {
        a=a1=a2=i;
        c=0,d=0,r=0;
        while(a!=0){
            c++;
            a/=10;

        }
        while(a1!=0){
            r=a1%10;
            d=d+pow(r,c);
            a1/=10;
        }
        if(a2==d) cout<<a2<<endl;
    }
    
}