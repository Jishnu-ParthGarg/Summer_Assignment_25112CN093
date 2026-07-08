//Write a program to Create ticket booking system.
#include <bits/stdc++.h>
using namespace std;
struct Ticket{
    string name;
    int tickets;
};
int main(){
    Ticket t;
    int availableSeats=100;
    cout<<"Enter Customer Name: ";
    getline(cin,t.name);
    cout<<"Available Seats: "<<availableSeats<<endl;
    cout<<"Enter Number of Tickets: ";
    cin>>t.tickets;
    if(t.tickets<=availableSeats){
        availableSeats-=t.tickets;
        cout<<"\n===== BOOKING CONFIRMED =====\n";
        cout<<"Customer Name: "<<t.name<<endl;
        cout<<"Tickets Booked: "<<t.tickets<<endl;
        cout<<"Remaining Seats: "<<availableSeats<<endl;
    }
    else{
        cout<<"Not enough seats available.";
    }
    return 0;
}