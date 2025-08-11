//pattern-7 =>starCross

#include<iostream>

using namespace std;

int main(){

    int rows;
    cout<<"Enter rows(odd number) : ";
    cin>>rows;
    int mid = (rows/2)+1 ;

    for (int i = 1 ; i <= rows; i++){
        for (int j = 1; j <= rows ; j++){
            if(i == j  || i+j==rows+1) cout<<"*"<<"";
            else cout<<" ";
        }
        cout<<endl;
    }

}