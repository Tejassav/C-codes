#include<iostream>

using namespace std;

int main(){
    float input;
    cout<<"Enter a number : ";
    cin>>input;
    if(input<0){
        cout<<"Absolute value of "<<input<<" is : "<<-input;
    }
    else{
        cout<<"Absolute value of "<<input<<" is : "<<input;
    }
}