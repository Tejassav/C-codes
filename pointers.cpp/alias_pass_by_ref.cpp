#include<iostream>

using namespace std;

void swap(int &x, int &y){//alias method-->same work as pass by reference
    int temp;
    temp=x;
    x=y;
    y=temp;
}

int main(){

    int x = 5, y = 6;
    cout<<"Values before swapping : "<<"x : "<<x<<" and y : "<<y<<endl;
    swap(x,y);
    cout<<"Values after swapping : "<<"x : "<<x<<" and y : "<<y<<endl;
}