#include<iostream>

using namespace std;

int main(){
    int x = 5;
    int y = 6;
    
    int* ptr1 = &x, *ptr2 = ptr1;
    
    ptr1 = &y;//this pointer is now pointing somewhere else but ptr2 is still storing the same address as ptr1 used to store i.e address of x.
    cout<<ptr1<<" "<<ptr2;
}