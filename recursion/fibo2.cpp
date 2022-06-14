#include<iostream>
using namespace std;

int fibo(int n){

    if(n == 1 || n == 0){
        return n;
    }

    return fibo(n-1) + fibo(n-2);

}


int main(){

    int n;
    cout<<"Enter the n : ";
    cin>>n;

    cout<<"Fibonaccai at number n : "<<fibo(n);

}