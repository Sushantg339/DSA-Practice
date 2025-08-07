#include<iostream>
using namespace std;

int main(){
    int n,a=1;
    cout << "enter a number : ";
    cin >> n;

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cout << a << " ";
            a++;
        }
        cout << endl;
    }
}