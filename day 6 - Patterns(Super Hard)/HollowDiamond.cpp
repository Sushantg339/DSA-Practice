#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "enter a number : ";
    cin >> n;

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n-i ; j++){
            cout << "* ";
        }
        for(int sp=0 ; sp<2*i ; sp++){
            cout<<"  ";
        }
        for(int j=0 ; j<n-i ; j++){
            cout << "* ";
        }
        cout << endl;
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<=i ; j++){
            cout << "* ";
        }
        for(int sp=0 ; sp<2*(n-i-1) ; sp++){
            cout << "  ";
        }
        for(int j=0 ; j<=i ; j++){
            cout << "* ";
        }
        cout << endl;
    }
    
}