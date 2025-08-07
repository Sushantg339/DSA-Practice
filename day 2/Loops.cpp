#include<iostream>
using namespace std;

int main(){
    for(int i=0 ; i<5 ; i++){
        cout << (i+1) << " ";
    }
    cout << endl;
    
    for(int i=0 ; i<5 ; i++){
        cout << (i+1)*(i+1) << " ";
    }
    cout << endl;

    for(int i=1 ; i<=20 ; i++){
        if(i%2 == 0){
            cout << i << " ";
        }
    }
    cout << endl;


    for(int i=0 ; i<26 ; i++){
        cout << char(i+97) << " ";
    }
    cout << endl;


    for(int i=10 ; i>0 ; i--){
        cout << i << " ";
    }
    cout << endl;

    for(int i=1 ; i<=100 ; i = i+3){
        cout << i << " ";
    }
    cout << endl;

    

}