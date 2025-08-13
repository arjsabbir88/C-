#include<iostream>
using namespace std;

int main(){
    int arr[7]= {4,6,5,8,2,1};

    // int size = sizeof(arr) / sizeof(arr[0]);
    int size = 6;

    int insertPoint = 0;
    int value = 10;
    
    for(int i = size ; i> insertPoint; i--){
        // cout<<"start Looping " << i <<" "<< arr[i]<<endl;
        arr[i] = arr[i-1];
        // cout<<"end looping " << arr[i] << endl;
    }

    arr[insertPoint] = value;
    size++;

    for(int i = 0; i<size; i++){
        cout<<"index: "<<i <<" "<< "Elements: " <<arr[i]<<endl;
    }

    return 0;


}