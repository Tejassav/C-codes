//to be done....

#include<iostream>

using namespace std;

int main(){
    int arr1[] = {0, 2, 1, 4, 3, 5, 2, 4, 0, 6};
    int arr2[10];
    
    arr2[0] = -1;  // There is no previous element for the first element
    
    for(int i = 1; i < 10; i++){
        int max = -1;  // Reset max for each element
        for(int j = 0; j < i; j++){
            if(arr1[j] > max){
                max = arr1[j];
            }
        }
        arr2[i] = max;
    }

    // Printing arr1
    cout << "Given array: ";
    for(int i = 0; i < 10; i++){
        cout << arr1[i] << " ";
    }
    cout << endl;

    // Printing previous greatest element array(arr2)
    cout << "Greatest element array: ";
    for(int i = 0; i < 10; i++){
        cout << arr2[i] << " ";
    }

    return 0;
}
