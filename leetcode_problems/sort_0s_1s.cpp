//using two pointer method

#include <iostream>
#include <vector>
using namespace std;

void Sort(vector <int> &v,int size){
     //taking two variables..
    int i =0;//first index
    int j=size-1;//last index

    while(i<j){
        if(v[j]==1) j--;
        if(v[i]==0) i++;
        if(i>j) break;
        if(v[i]==1 && v[j]==0){
            v[i]=0;
            v[j]=1;
            i++;
            j--;
        }
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
        if(x!=1 && x!=0){ cout<<"enter either 0 or 1..";
        i--;
        continue;
        }
        v.push_back(x);
    }
    //calling function to sort
    Sort(v,v.size());

    for(int i = 0 ; i < n; i++){
        cout<<v.at(i)<<" ";
    }
    

   


    
}