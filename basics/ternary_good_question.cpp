#include <iostream>

using namespace std;

int main(){

    int test=0;
    cout<<"expression 1 : "<<'1'<<endl;
    cout<<"expression 2 : "<<(test ? 3 : '1');//here in this ternary operator 3 is an int while '1' is a character hence both are not compatible in ternary thus ASCII value of '1' is calculated which is 49 and since test=0 which means false hence 49 is printed...

//ANOTHER GOOD QUESTION TO LOOK AT...


    // int a=18,b=20;

    // bool t=(a>20 && b<15) ? true : false;

    // cout<<"value of t is : "<<t;
    // return 0;

}