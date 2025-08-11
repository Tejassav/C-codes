//find the largest element in the given array..

#include<iostream>
#include<climits>

using namespace std;

int main(){
    int size;
    cout<<"enter size of array : ";
    cin>>size;
    int arr[size];
    for(int i=0; i <= size-1; i++){
            cin>>arr[i];//taking array elements as input
            cout<<arr[i]<<" ";//to output array
        }
    cout<<endl;
    int max=arr[0];
    for(int i = 0 ; i <= size-1 ; i++){
        if(arr[i]>max) max=arr[i];
    }
    cout<<"Maximum elements is : "<<max;
}
//check how to do it if the array is not full ....