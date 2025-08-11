//find the last occurance of the element in the array..

#include <iostream>
#include<vector>

using namespace std;



int main(){
    
    vector<int> v;

    int x;
    cout<<"Enter the element : ";
    cin>>x;
    cout<<endl;
    int index;
    v.push_back(9);
    v.push_back(91);
    v.push_back(44);
    v.push_back(8);
    
    v.push_back(9);
    v.push_back(24);
    v.push_back(9);
    v.push_back(8);

    cout<<"Size = "<<v.size()<<endl;

    for(int i=0; i < v.size(); i++){
        if(v.at(i)==x) index=i;
    }
    cout<<"last occurance of "<<x<<" is at : "<<index;



}

