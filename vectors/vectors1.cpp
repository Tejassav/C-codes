
#include <iostream>
#include<vector>

using namespace std;

int main(){
    vector <int> v; //we didn't mention size..

    v.push_back(6);
    v.push_back(72);
    // v[0]=98;
    // v[3]=68;
    // v[4]=4;
    v.push_back(55);


    cout<<v.size()<<endl;//size refers to number of elements in vector
    cout<<v.capacity()<<endl;//capacity refers to slots available in vectors
    for(int i = 0 ; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    
    cout<<endl;

    cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<" "<<v[3]<<" "<<v[4]<<" "<<v[5];
         //6         //72      //55     //mem address //0(no memory space alloted)

    cout<<endl;

    v.pop_back();//remove element from the vector from last and update size and not capacity..

    for(int i = 0 ; i <= v.size(); i++){
        cout<<v[i]<<" ";
    }
}