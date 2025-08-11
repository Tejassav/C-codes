#include<iostream>

using namespace std;

void swap(int *x, int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int main(){

    int x = 5, y = 6;
    cout<<"Values before swapping : "<<"x : "<<x<<" and y : "<<y<<endl;
    swap(&x,&y);//Pass by reference since the addresses are being passed that is reference to actual values is passed as agument..
    cout<<"Values after swapping : "<<"x : "<<x<<" and y : "<<y<<endl;
}