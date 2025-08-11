//sort colors using dutch algo or using three pointers or one pass..

#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v;
    int low=0;
    int mid=0;
    int size;
    cout<<"Enter size of the array: ";
    cin>>size;
     int hi = size-1;
    cout<<"Enter only 0 or 1 or 2 : ";//having problem in input of elements in vector if size if not known
    for(int i = 0 ; i < size; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    while(hi>=mid){
        if(v[mid]==2){
            int temp=v[mid];
            v[mid]=v[hi];
            v[hi]=temp;
            hi--;
        }

       else if(v[mid]==0){
            int temp=v[mid];
            v[mid]=v[low];
            v[low]=temp;
            low++;
            mid++;
        }

        else{
            mid++;
        }
    }
    cout<<"[";
         for(int i = 0 ; i < size ; i++){
            cout<<v[i]<<",";
         }
         cout<<"]";

}