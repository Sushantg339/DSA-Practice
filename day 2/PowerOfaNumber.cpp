#include<iostream>
using namespace std;

int main(){
    int num , pow;
    cout << "enter a number : ";
    cin >> num;
    cout << "enter power : ";
    cin >> pow;
    int ans = num;
    for(int i=1 ; i<pow ; i++){
        ans = ans*num; 
    }

    cout << ans;
}