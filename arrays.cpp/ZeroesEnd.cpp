//Move all zeroes at the end...

#include<iostream>
#include<climits>

using namespace std;


void swap(int *x, int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

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

   int j=0;
   for(int i = 0; i < size ; i++)
    {
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }

    cout<<"Array after moving zeroes at end : "; 
   for(int i = 0; i < size ; i++){
        cout<<arr[i]<<" ";
   }
   cout<<endl;

  
}