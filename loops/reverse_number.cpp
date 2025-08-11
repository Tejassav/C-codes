#include <iostream>

using namespace std;

int main(){

    int n;
    cout<<"Enter number : ";
    cin>>n;

    int x = 0;
    while(n){
        x=x*10;
        x+=(n%10);
        n/=10;
    }

cout<<"Reverse : "<<x;
}