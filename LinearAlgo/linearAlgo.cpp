#include<iostream>
using namespace std;

int main(){
    int n=4;
    int arr[5] = {8,2,4,5,3};

    int hv = arr[0];

    for(int i=0; i<=n; i++){
        if(arr[i]>hv){
            hv = arr[i];
        }
    }
    cout<<"highest value: "<< hv<<endl;
    // cout<<"lowest vlaue : " <<lv <<endl;
    return 0;
}





















// int lv = arr[0];













// if(arr[i]<lv){
//             lv = arr[0];
//         }