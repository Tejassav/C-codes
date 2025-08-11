#include<iostream>

using namespace std;

int main(){
    int radius,height;
    float volume;

    cout<<"Enter radius of the cylinder : ";
    cin>>radius;
    cout<<"Enter height of the cylinder : ";
    cin>>height;

    volume=3.14*radius*radius*height;
    cout<<"Volume of the cylinder is : "<<volume;

}