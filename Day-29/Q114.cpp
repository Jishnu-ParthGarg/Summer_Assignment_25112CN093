//Write a program to Create menu-driven array operations system.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int choice;
    do{
        cout<<"\n===== ARRAY OPERATIONS MENU =====\n";
        cout<<"1. Display Array\n";
        cout<<"2. Find Sum\n";
        cout<<"3. Find Maximum Element\n";
        cout<<"4. Search Element\n";
        cout<<"5. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Array: ";
                for(int i=0;i<n;i++){
                    cout<<arr[i]<<" ";
                }
                cout<<endl;
                break;
            case 2:{
                int sum=0;
                for(int i=0;i<n;i++){
                    sum+=arr[i];
                }
                cout<<"Sum = "<<sum<<endl;
                break;
            }
            case 3:{
                int mx=arr[0];
                for(int i=1;i<n;i++){
                    if(arr[i]>mx)
                        mx=arr[i];
                }
                cout<<"Maximum Element = "<<mx<<endl;
                break;
            }
            case 4:{
                int key;
                bool found=false;
                cout<<"Enter element to search: ";
                cin>>key;
                for(int i=0;i<n;i++){
                    if(arr[i]==key){
                        found=true;
                        break;
                    }
                }
                if(found)
                    cout<<"Element Found"<<endl;
                else
                    cout<<"Element Not Found"<<endl;

                break;
            }
            case 5:
                cout<<"Exiting..."<<endl;
                break;
            default:
                cout<<"Invalid Choice!"<<endl;
        }
    }while(choice!=5);
    return 0;
}