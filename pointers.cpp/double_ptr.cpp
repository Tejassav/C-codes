#include<iostream>

using namespace std;

int main(){

    int x = 5;
    int *ptr = &x;
    cout<<ptr<<endl;

    int **ptr2 = & ptr;
    cout<<**ptr2;
}