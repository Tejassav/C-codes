
#include <iostream>

using namespace std;

int main(){

    char character;
    cout<<"Enter a vowel..";
    cin>>character;

    switch(character){
        case 'a':
        cout<<"Ayush";
        break;
        
        case 'e':
        cout<<"Eklavya";
         break;

        case 'i':
        cout<<"Ishan";
         break;

        case 'o':
        cout<<"Om";
         break;

        case 'u':
        cout<<"Utkarsh";
         break;

         default:
         cout<<"Enter a valid vowel..";
         break;
    }

}