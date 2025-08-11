
#include <iostream>
#include<vector>

using namespace std;

int main(){
   vector<int> v;

   v.push_back(5);
   v.push_back(8);
   v.push_back(6);
   
   v.push_back(1);
   v.push_back(56);
   v.push_back(32);
   //6 elements added hence size is 6 but capacity is 8

   cout<<"size is : "<<v.size()<<endl;
   cout<<"Capacity is : "<<v.capacity()<<endl;

   for(int i = 0; i <v.size(); i++){
    cout<<v[i]<<" ";
   }cout<<endl;
   cout<<endl;

   //now removing two elements 

   v.pop_back();
   v.pop_back();
   
    //hence size becomes 4 and capacity  remains same i.e 8..

   for(int i = 0; i <v.size(); i++){
    cout<<v[i]<<" ";
    
   }cout<<endl;
   

    cout<<"size is : "<<v.size()<<endl;
   cout<<"Capacity is : "<<v.capacity()<<endl;
}