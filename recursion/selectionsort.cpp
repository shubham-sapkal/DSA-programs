#include<iostream>
using namespace std;

void selectionsort(int *arr, int size)
{
    // base case 
    if(size == 0 || size == 1){
        return ;
    }

    int minIndex = 0;
    for(int i = 1; i<size; i++){
        if(arr[i] < arr[minIndex] ){
            minIndex = i;
        }
    }

    swap(arr[minIndex], arr[0]);

    selectionsort(arr+1, size-1);
 

}


int main(){

    int arr[] = {2, 1, 3, 6, 9};
    int size = sizeof(arr)/sizeof(arr[0]);

    selectionsort(arr, size);

    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }

}