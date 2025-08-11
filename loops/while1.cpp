//print uppercase alphabets with their ASCII values..

#include <iostream>

using namespace std;

int main(){
    //A->65 AND Z->90..
    char alpha = 'A';
    while(alpha<=90){
        cout<<alpha<<" : "<<(int)alpha<<endl;
        alpha++;
    }

}