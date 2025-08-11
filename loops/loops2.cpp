//A.P series till  n ..

#include<iostream>

using namespace std;

int main(){


    int a;
    cout<<"enter first term : ";
    cin>>a;

    int n;
    cout<<"enter number of terms : ";
    cin>>n;

    int d;
    cout<<"enter common difference : ";
    cin>>d;

    for(int i = 1; i <= a+(n-1)*d; i+=d){
        cout<<i<<"\t";
    }

}