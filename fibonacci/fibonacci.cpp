#include<iostream>
using namespace std;


int fibonacci(int n){
    if(n<1){
        return n;
    }

    cout<<n <<" ";
    return n* fibonacci(n-1);
}

int main(){
    int n;
    cout<<"Enter the fibonacci number : ";
    cin>> n;

    fibonacci(n);

}