//using two pass

#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> nums;
    int size;
    cout<<"Enter size of the array: ";
    cin>>size;
    cout<<"Enter only 0 or 1 or 2 : ";//having problem in input of elements in vector if size if not known
    for(int i = 0 ; i < size; i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    cout<<endl;
      int n = nums.size();
         int noz = 0;
         int noo = 0;
         int Not = 0;
         for(int i = 0; i < n ; i++){
            if(nums[i]==0) noz++;
            else if(nums[i]==1) noo++;
            else Not++;
         }

         for(int i = 0; i < n; i++){
                if(i<noz) nums[i]=0;
                else if(i<(noz+noo)) nums[i]=1;
                else nums[i]=2;
         }
         
        cout<<"[";
         for(int i = 0 ; i < n; i++){
            cout<<nums[i]<<",";
         }
         cout<<"]";
}
