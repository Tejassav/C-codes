#include<iostream>

using namespace std;

int main(){
    int rows;
    cout<<"Enter rows : ";
    cin>>rows;

    for(int i = 1; i <= rows; i++){
            for(int j = 1; j <= rows; j++){
                if(j>=rows+1-i){
                    cout<<"*";
                }else cout<<" ";
            }
            cout<<endl;
    }
}


/*
int main(){
    int rows;
    cout<<"Enter rows : ";
    cin>>rows;

    for(int i = 1; i <= rows; i++){
            for(int j = 1; j <= rows; j++){
                cout<<" ";
            }
            for(int k = 1;k <= i;k++){
            cout<<"*";
            }
            cout<<endl;
    }
}

*/