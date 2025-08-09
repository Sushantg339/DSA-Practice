#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "enter a number : ";
    cin >> n;

    int sum =0 , i=1;
    while(i<=n){
        sum += i;
        i++;
    }

    cout << "Sum = " << sum;
}