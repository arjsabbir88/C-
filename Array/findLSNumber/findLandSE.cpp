#include<iostream>
using namespace std;

int main(){
    int arr[5] = {7,3,6,55,33};
    int siz = sizeof(arr)/sizeof(int);

    int smallest = INT_MAX;
    int largest = INT_MIN;
    int smallIndex = 0;
    int index = 0;

    cout<< smallest <<endl;
    cout<< largest <<endl;

    for(int i = 0; i<siz; i++){
        if(arr[i]<smallest){
            smallest = arr[i];
            smallIndex = i;
        }

        if(arr[i]>largest){
            largest = arr[i];
            index = i;
        }
    }
    cout<< "Smallest: " << smallest <<" index " <<smallIndex <<endl;
    cout<< "Largest: " << largest <<" index " <<index <<endl;

    return 0;
}