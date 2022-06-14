#include<iostream>
using namespace std;

void insertionsort(int *arr, int size){

    if(size == 0 || size == 1){
        return ;
    }

}


int main(){

    int arr[] = {2, 1, 3, 6, 9};
    int size = sizeof(arr)/sizeof(arr[0]);

    insertionsort(arr, size);

    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }

}