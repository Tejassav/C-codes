#include<iostream>
#include<vector>

using namespace std;

void display(vector<int> v){
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void reverse(vector<int> &v, int initial,int end){
   int i = initial;
   int j = end;
   while(i<=j){
    int temp = v[i];
    v[i]=v[j];
    v[j]=temp;
    i++;
    j--;
   }

}

int main(){

     vector<int> v;
     int size;
    cout<<"Enter size of the array : ";
    cin>>size;

    //taking elements of the array from the user..
     for(int i = 0 ; i < size ; i++){
        int x;
        cin>>x;
        v.push_back(x);
        
     }

     cout<<"Size of the array is : "<<v.size()<<endl;

    

    int start;
    cout<<"enter starting index  : ";
    cin>>start;

     int end;
    cout<<"enter last  index : ";
    cin>>end;

    cout<<"array : ";
     display(v);
     reverse(v,start,end);
    cout<<"reversed array : ";
     display(v);




}