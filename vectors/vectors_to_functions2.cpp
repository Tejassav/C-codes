//throught the output of the code we can observe that vectors are passed by reference into the functions unlike arrays...
//that is a new array or rather vector is created which is copy of the  original one and that is used in the function by default...
//but we can pass vectors by reference into the functions by using the ampersand operator(&)..
//this is the file 

#include <iostream>
#include<vector>

using namespace std;

void change(vector<int>& a){
    a[0]=3;
    cout<<"during fucntion call.."<<endl;
    for(int i = 0 ; i < a.size(); i++){
        cout<<a.at(i)<<" ";
    }
    cout<<endl;

}

int main(){
    
    vector<int> v;

    v.push_back(9);
    v.push_back(91);
    v.push_back(44);
    v.push_back(8);

    cout<<"before the function is called..."<<endl;

    for(int i = 0 ; i < v.size(); i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

    change(v);

    cout<<"after the function is called.."<<endl;

    for(int i = 0 ; i < v.size(); i++){
        cout<<v.at(i)<<" ";
    }


}

