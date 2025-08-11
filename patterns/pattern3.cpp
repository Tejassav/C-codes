//PATTERN 3 -> STAR TRIANGLE
#include<iostream>

using namespace std;

int main(){

    int row;
     cout<<"Enter row number : ";
     cin>>row;

    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= i; j++){
            cout<<"*";
        }
        cout<<endl;
     }

}