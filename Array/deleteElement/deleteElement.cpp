#include<iostream>
using namespace std;

int main(){
    int arr[5] = {5,2,9,7};
    int size = 4;

    int deleteIndex = 2;

    cout<<"delete Element is : " <<arr[deleteIndex] <<endl;
    for(int i = deleteIndex; i<size; i++){
        arr[i] = arr[i+1];
    }

    
    size --;

    for(int i =0;i<size; i++){
        cout<<"Element is : " << arr[i] <<endl;
    }
}