//Write a program to Create quiz application
#include <bits/stdc++.h>
using namespace std;
int main(){
    int score=0,answer;
    cout<<"===== QUIZ APPLICATION =====\n\n";
    cout<<"1. What is the capital of India?\n";
    cout<<"1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n";
    cin>>answer;
    if(answer==2) score++;
    cout<<"\n2. Which language is used for C++ programming?\n";
    cout<<"1. Markup\n2. Query\n3. Programming\n4. Styling\n";
    cin>>answer;
    if(answer==3) score++;
    cout<<"\n3. How many days are there in a week?\n";
    cout<<"1. 5\n2. 6\n3. 7\n4. 8\n";
    cin>>answer;
    if(answer==3) score++;
    cout<<"\n4. What is 10 + 20?\n";
    cout<<"1. 20\n2. 30\n3. 40\n4. 50\n";
    cin>>answer;
    if(answer==2) score++;
    cout<<"\n5. Which planet is known as the Red Planet?\n";
    cout<<"1. Earth\n2. Venus\n3. Mars\n4. Jupiter\n";
    cin>>answer;
    if(answer==3) score++;
    cout<<"\nYour Score: "<<score<<"/5"<<endl;
    return 0;
}