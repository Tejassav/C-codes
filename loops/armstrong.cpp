//armstrong number->abc=(a*a*a) + (b*b*b) + (c*c*c)

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
  
    
    for(int i = 1 ; i <= n; i ++){
        int sum=0;
        int temp=i;
        while(temp){//temp ki jgh jb i use kr rha tha while me.. to output kyu nhi aa rha tha?
           int x=temp%10;
            sum+=(x*x*x);
            temp/=10;
        }
        if(sum==i){
            cout<<i<<endl;
        }

    }
}