#include<iostream>//this is a pre processor statement that is processed before the file is compiled..and iostream is a header file and this includes all the contents of the iostrean file into this file... 

using namespace std;

int main(){
    char alphabet;
    cout<<"ENTER AN ALPHABET : ";
    cin>>alphabet;
    //A->65 AND Z->90
    //a->97 AND z->122

    if(alphabet>=65 && alphabet<=90){
        cout<<"It is an uppercase alphabet.."<<endl;
    }
    else if(alphabet>=97 && alphabet<=122){
        cout<<"It is an lowercase alphabet..."<<endl;
    }
    else{
        cout<<"enter character is not an alphabet....";
    }
}