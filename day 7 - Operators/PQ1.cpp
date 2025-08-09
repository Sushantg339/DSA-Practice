#include<iostream>
using namespace std;

int main(){
    int x , y ,z;
    cout << "enter x : ";
    cin >> x;
    cout << "enter y : ";
    cin >> y;
    cout << "enter z : ";
    cin >> z;

    if(x>y && y!=z){
        x = x^z;
        z=x^z;
        x = x^z;
    }
    
    if(z%2 ==0 || x%3==0){
        y += 5;
    }

    x = ~x;

    cout << x << " " << y << " " << z ;


}