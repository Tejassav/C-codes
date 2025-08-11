//ALGO TO SOLVE THIS QUESTION

/*

->to extract the rightmost digit take modulus by 10 of the number i.e num%10
->then to remove the rightmost part do: num/10



*/

#include<iostream>

using namespace std;


int main(){

    int  n;
    cout<<"Enter the number : ";
    cin>>n;

    int sum=0;
    while(n){
        int digit = n%10;
        if(digit%2==0){
            sum+=digit;
        }
        n/=10;
    }
    cout<<"Sum of even digits in the given number is : "<<sum;

}