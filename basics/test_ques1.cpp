//calculate position of the given alphabet in alphabets from their ascii value

#include<iostream>

using namespace std;

int main(){
    char character;
    cout<<"Enter a character : ";
    cin>>character;
    cout<<"Position of "<<character<<" in alphabets is "<<(int)character-((int)'A'-1);
}