//write a program to check for the unique elements in an array

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

   for(int i = 0 ; i < size ; i++){
    int count = 0 ;
    for(int j = 0 ; j < size ; j++ ){
        if(i!=j && arr[i]==arr[j]){
            count++;
        }
    }
    if(count==0){
        cout<<arr[i]<<" ";
    }
   }
}