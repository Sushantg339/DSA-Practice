#include<bits/stdc++.h>
using namespace std;

int main(){
    // Input taking in C++
    // int a , b;
    // cin >> a >> b;
    // cout << a+b ;

    // Type Casting 
    // int a = 66;
    // char c = 'b';
    // c = a;
    // cout << c;



    // conditionals -> IF-ELSE 
    // example - 1

    // int package ;
    // cout << "enter package : ";
    // cin >> package;
    // if(package >= 10){
    //     cout << "accepted";
    // }else{
    //     cout << "rejected";
    // }



    // example - 2

    // int marks ;
    // cout << "enter marks : ";
    // cin >> marks;
    // if(marks >=33) cout << "pass";
    // else cout << "fail";


    // example - 3

    // int a , b;
    // cout << "enter a : ";
    // cin >> a;
    // cout << "enter b : ";
    // cin >> b;
    // if(a>b) cout << "yes";
    // else cout << "no";


    // example - 4

    // int num ;
    // cout << "enter a number : ";
    // cin >> num;

    // if(num%2 == 0) cout << "even";
    // else cout << "odd";



    // example - 5

    // int age ;
    // cout << "enter your age : ";
    // cin >> age ;
    // if(age > 18) cout << "adult";
    // else cout << "teenager";

    // IF - ELSE IF - ELSE -> example - 6
    // int num ;
    // cout << "enter a number : ";
    // cin >> num;
    // if(num > 0){
    //     cout << "positive";
    // } else if(num < 0){
    //     cout << "negative";
    // } else{
    //     cout << "zero";
    // }


    // example - 7
    
    // char ch ;
    // cout << "enter a character : ";
    // cin >> ch;
    // if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
    //     cout << "vowel";
    // } else{
    //     cout << "consonant";
    // }

    // example - 7
    int num ;
    cout << "enter number (from 1 to 7) : ";
    cin >> num;
    switch (num)
    {
    case 1:
        cout << "monday";
        break;
    case 2:
        cout << "tuesday";
        break;
    case 3:
        cout << "wednesday";
        break;
    case 4:
        cout << "thursday";
        break;
    case 5:
        cout << "friday";
        break;
    case 6:
        cout << "saturday";
        break;
    case 7:
        cout << "sunday";
        break;
    
    default:
        cout << "invalid input";
        break;
    }
}