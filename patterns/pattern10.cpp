//BINARY TRIANGLE

#include<iostream>

using namespace std;

int main(){

    int rows;
    cout<<"Enter rows : ";
    cin>>rows;
    bool a ;
    for (int i =1 ; i<=rows; i++){
        if(i%2==0) a = 0;
            else a=1;
        for (int j = 1; j <= i ; j++){
            cout<<a;
            a=!a;
        }
        cout<<endl;
    }

}