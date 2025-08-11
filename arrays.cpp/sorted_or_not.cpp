//check if the given array is sorted or not..

#include<iostream>
#include<climits>

using namespace std;

int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;

   int arr[size];

   if(size==0) cout<<"Enter a valid size...";

   //taking array elements
   cout<<"Enter array elemets : ";
   for(int i = 0; i < size ; i++){
        cin>>arr[i];
   }

   //displaying array
    cout<<"Array : ";
   for(int i = 0; i < size ; i++){
        cout<<arr[i]<<" ";
   }
   cout<<endl;

   for(int i = 0 ; i < size-1; i++){
    if(arr[i+1]<arr[i]){
        cout<<"Array is not sorted...";
        return 0;//if discrepancy is found then return no need to check further ....
    }
   }
    cout<<"Array is sorted";
}