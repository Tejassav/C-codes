#include<iostream>

using namespace std;

int main(){

    int n;

    cout<<"Enter number of rows : ";
    cin>>n;

   

    for(int i = 1; i <= n; i++){
        for( char j = 'A'; j <= 'A'+(n-1); j++){
            cout<<j;
        }
        cout<<endl;
    }
}