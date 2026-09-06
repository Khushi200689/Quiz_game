#include<iostream>
using namespace std;

int main(){

    cout<< "Q1. Which language are we using? "<<endl;
    cout<< "1. C++"<<endl;
    cout<< "2. Java"<<endl;
    cout<< "3. Python"<<endl;
    cout<< "4. HTML"<<endl;
int score = 0;
int answer;
cout<< "Enter your answer: ";
cin>> answer;

if(answer == 1){
    cout<< "Correct answer!"<<endl;
    score++;
}
else{
    cout<< "Incorrect answer!"<<endl;
}
cout<< "Your score is: "<<score<<endl;

cout<< "Q2. Which language is used for web page structure? "<<endl;
cout<< "1. C++"<<endl;
cout<< "2. HTML "<<endl;
cout<< "3. Python"<<endl;
cout<< "4. Java"<<endl;
cout<< "Enter your answer: ";
cin>> answer;

if(answer == 2){
    cout<< "Correct answer!"<<endl;
    score++;
}
else{
    cout<< "Incorrect answer!"<<endl;
}
cout<< "Your score is: "<<score<<endl;

    return 0;

}
