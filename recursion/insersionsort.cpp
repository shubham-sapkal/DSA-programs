#include<iostream>
using namespace std;

void insertionsort(int *arr, int size){

    for(int i=1;i<size;i++){
        for(int j=i-1; j>=0;j--){

            if(arr[i] < arr[j] ){
                swap()
            }

        }
    }

}


int main(){

    int arr[] = {2, 1, 3, 6, 9};
    int size = sizeof(arr)/sizeof(arr[0]);

    insersionsort(arr, size);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

}