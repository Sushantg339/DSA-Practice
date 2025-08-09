#include<iostream>
using namespace std;

bool Prime(int n);

int main(){
    cout << Prime(5) << endl;
    cout << Prime(6) << endl;
    cout << Prime(89) << endl;
}

bool Prime(int n){
    if(n<2) return 0;

    for(int i=2 ; i<n ; i++){
        if(n%i == 0) return 0;
    }

    return 1;
}