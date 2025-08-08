#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "enter a number : ";
    cin >> n;

    for(int i=0 ; i<n ; i++){
        
        for(int sp=0 ; sp<n-i-1 ; sp++){
            cout << "  ";
        }
        for(int j=0 ; j<=i ; j++){
            cout << j+1 << " ";
        }
        for(int j=i-1 ; j>=0 ; j--){
            cout << j+1 << " ";
        }
        cout << endl;
    }
}