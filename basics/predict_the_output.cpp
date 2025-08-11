#include<iostream>

using namespace std;

int main(){
     int x;

     x = 5>8 ? 10 : 1 != 2 < 5 ? 20 : 30 ;//output is 30 since 5>8 false hence evaluating expression after colon 2<5(true)=>1 and then 1 != 1(false) hence 30 will be returned.

     cout<<"Value of x is "<<x;
     return 0;
}