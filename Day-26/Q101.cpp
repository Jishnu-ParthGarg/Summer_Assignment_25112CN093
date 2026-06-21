//Write a program to Create number guessing game.
#include <bits/stdc++.h>
using namespace std;
int main(){
    srand(time(0));
    int secret=rand()%100+1;
    int guess,attempts=0;
    cout<<"Guess a number between 1 and 100"<<endl;
    do{
        cout<<"Enter your guess: ";
        cin>>guess;
        attempts++;
        if(guess>secret)
            cout<<"Too high!"<<endl;
        else if(guess<secret)
            cout<<"Too low!"<<endl;
        else
            cout<<"Congratulations! You guessed it in "<<attempts<<" attempts."<<endl;
    }while(guess!=secret);
    return 0;
}