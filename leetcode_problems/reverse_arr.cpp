//Write a program to reverse the array without using any extra array...

#include <iostream>
#include<vector>

using namespace std;

void reverse(vector<int> &v){
   int i = 0;
   int j = v.size()-1;
   while(i<=j){
    int temp = v[i];
    v[i]=v[j];
    v[j]=temp;
    i++;
    j--;
   }

}

void display(vector<int> v){
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){

    vector<int> v;
    int entries;
    cout<<"Enter the number of elements : ";
    cin>>entries;

    for(int i = 0; i < entries ; i++){
        int n;
        cin>>n;
        v.push_back(n);
    }

    display(v);
    reverse(v);
    cout<<"reversed array: ";
    display(v);

}