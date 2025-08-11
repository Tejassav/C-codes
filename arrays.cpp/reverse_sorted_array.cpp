



#include<iostream>

using namespace std;

int main(){

    int arr[]{10,20,20,30,30,30};

    int size = sizeof(arr)/sizeof(arr[0]);//here, size = number of elements in array
   
    int i = 0, j;

    for(j = 1; j < size; j++){
        if(arr[j] != arr[i]){
            arr[i+1] = arr[j];
            i++;
        }
    }
   

    cout<<"Unique elements in array: "<<i+1<<endl;
}

