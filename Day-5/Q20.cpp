//Write a program to Find largest prime factor.
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,largest=-1;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            bool isPrime=true;
            for(int j=2;j<=i/2;j++){
                if (i%j==0){
                    isPrime = false;
                    break;
                }
            }
            if(isPrime)
                largest=i;
        }
    }
    cout << "Largest Prime Factor = " << largest;
    return 0;
}