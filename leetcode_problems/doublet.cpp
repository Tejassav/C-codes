//Find the doublet in the array whose sum is equal to the given value x..

#include <iostream>
#include<vector>

using namespace std;

int main(){

    int x;
    cout<<"Enter number : ";
    cin>>x;
//we have used vector instead of array just to use the size function ...
    vector<int> v= {1,2,3,5,6,7,8,9,10,11,12,13,1,1,1,1,2,3};

    for(int i = 0 ; i < v.size(); i++){
        for(int j = i+1; j < v.size(); j++){
            if(x==v.at(i) + v.at(j)) cout<<"("<<v.at(i)<<" , "<<v.at(j)<<")"<<endl;
        }
    }

}