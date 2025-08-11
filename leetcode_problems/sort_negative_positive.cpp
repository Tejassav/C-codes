//move all the negative numbers to the begining positive numbers in the end..
#include<iostream>
#include<vector>

using namespace std;

void sortNegPos(vector<int> &v){
    int size = v.size();
    int i = 0;
    int j = size-1;
    while(i<j){
        if(v[i]>=0 && v[j]<0){
            //swap
            int temp = v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }
        if(v[i]<0) i++;
        if(v[j]>=0) j--;
    }
}

int main(){

    vector<int> v;
    int n;
    cout<<"enter number of elements: ";
    cin>>n;
    for(int i = 0 ; i < n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    cout<<"Before sorting: ";

    for(int i = 0 ; i < n ; i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

    sortNegPos(v);

    cout<<"After sorting: ";

    for(int i = 0 ; i < n ; i++){
        cout<<v.at(i)<<" ";
    }

}