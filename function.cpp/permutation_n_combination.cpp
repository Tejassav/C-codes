#include<iostream>

using namespace std;

int fact(int x){
    int factorial=1;
    for(int i = 2; i <= x; i++){
        factorial*=i;
    }
    return factorial;
}

int combination(int n , int r){
    int ncr = fact(n)/(fact(r)*fact(n-r));
    return ncr;
}

int permutation(int n , int r){
    int ncr = fact(n)/fact(n-r);
    return ncr;
}

int main(){

//combination=n!/(r! * (n-r)!)

    int n;
    cout<<"Enter n : ";
    cin>>n;

    int r;
    cout<<"Enter r : ";
    cin>>r;

    int ncr = combination(n,r);
    int npr = permutation(n,r);

    cout<<"Combination : "<<ncr<<endl;
    cout<<"Permutation : "<<npr<<endl;

}