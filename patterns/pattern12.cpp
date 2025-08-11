//RHOMBUS

#include<iostream>

using namespace std;

int main(){

    int rows;
    cout<<"Enter rows : ";
    cin>>rows;

    for(int i = 1; i <= rows; i++){
        //spaces
        for(int j = 1; j <= rows-i; j++ ){
                cout<<" ";
        }

        //stars

        for(int k = 1; k <= rows ; k++){
            cout<<"*";
        }
        cout<<endl;
    }

}