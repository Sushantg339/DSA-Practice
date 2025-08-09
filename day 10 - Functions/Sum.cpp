#include<iostream>
using namespace std;

int sumToN(int n){
    int sum = 0;
    for(int i=1 ; i<=n ; i++){
        sum += i;
    }
    return sum;
}

int main(){
    cout << sumToN(5) << endl;
    cout << sumToN(10) << endl;
    cout << sumToN(15) << endl;
}

