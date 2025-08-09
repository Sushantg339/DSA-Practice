#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "enter a decimal number(base 10) : ";
    cin >> n;

    int ans = 0;
    while(n!=0){
        int rem = n%2;
        ans = ans*10 + rem;
        n /= 2;
    }
    cout << ans;
}