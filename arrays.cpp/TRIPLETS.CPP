//write  a program to find triplets whose sum is equal to given value..
//catch: numbers can be same but indices must be different...

#include<iostream>

using namespace std;

int main(){
    int size;
    cout<<"Enter size : ";
    cin>>size;
    int arr[size];

    int x;
    cout<<"Enter sum : ";
    cin>>x;

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

    //counting triplets..
    int count=0;
    for(int i = 0; i < size-2; i++){
        for(int j = i+1; j < size-1; j++){
            for(int k = j+1; k < size; k++){
                    if((arr[i]+arr[j]+arr[k])==x){
                            count++;
                            cout<<"indexes:"<<"["<<i<<","<<j<<","<<k<<"]"<<"values :"<<" ("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<endl;
                    } 
        }
    }
}
    cout<<"Number of triplets : "<<count<<endl;

}