//write a program to count the number of elements strictly greater than x.

#include <iostream>

using namespace std;

void count_great(int arr[],int size,int x){
    int count = 0;
    for(int i = 0; i < size ; i++){
            if(arr[i]>x) count++;
    }
    cout<<"Number of elements greater than "<<x<<" is : "<<count;
}

int main(){

    int arr[]={1,2,3,4,5,6,7,8,9,10};

    int size=sizeof(arr)/sizeof(arr[0]);
    int element;
    cout<<"enter the element : ";
    cin>>element;

    count_great(arr,size,element);
}