#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> arr1;
    vector<int> arr2;
    vector<int> arr3;

    int size1;
    int size2;
    int size3;
    //taking sie of the array..
    cout<<"Enter the size of arr1 and arr2: ";
    cin>>size1>>size2;
    //taking elements of arr1..
     for(int i = 0 ; i < size1; i++){
        int x;
        cin>>x;
        arr1.push_back(x);
    }
    //taking elements of arr2...
     for(int i = 0 ; i < size2; i++){
        int x;
        cin>>x;
        arr2.push_back(x);
    }

    size3=size1+size2;

    int i=0;
    int j=0;
    int k;

       while(i==size1-1 || j==size2-1){
        if(arr1[i]>arr2[j]){
        arr3.push_back(arr1[i]);
        i++;
       }
       else if(arr1[i]>=arr2[j]){
        arr3.push_back(arr1[i]);
        arr3.push_back(arr2[j]);
        i++;
        j++;
       }

        else {
        arr3.push_back(arr2[j]);
        j++;
       }

       
       }


}