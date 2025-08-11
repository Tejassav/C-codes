#include<iostream>

using namespace std;

void display(int a[],int size){//here int a[] is equivalent to int *a which is taking the address of the first element of the argument array(here arr).
    for(int i =0; i <= size-1 ; i++){
        cout<<a[i]<<" ";
    }
}

void change(int a[], int size){
    a[1]=100;
}

int main(){
    int arr[]={1,2,3,4,5};
    //int *ptr = &arr; => this is wrong since here pointer can point to a single address but &arr is giving address of the entire array elementss...
    //when we pass arrays as paramter we are actually passing a pointer to a address of array..
    int size=sizeof(arr)/sizeof(arr[0]);

    display(arr,size);
    change(arr,size);//we can see changes are made in the original array hence we can say arrays are passed by reference in the functions..
    cout<<endl;
    display(arr,size);
}