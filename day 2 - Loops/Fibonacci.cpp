#include<iostream>
using namespace std;

int main(){
    int n ;
    cout << "enter a number : ";
    cin >> n;

    int first = 0;
    int second = 1;
    

    if(n == 1){
        cout << first ;
        return 0;
    } else if(n == 2){
        cout << second;
    } else{
        int fib = 0;
        for(int i=3 ; i<=n ; i++){
            fib = first + second;
            first = second;
            second = fib;
        }

        cout << fib;
    }
    return 0;
}