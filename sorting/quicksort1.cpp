#include<iostream>
using namespace std;

int partition(int *arr, int start, int end){

    

    int pivot = arr[start];

    int count = 0;

    // check the elements greater than pivot 
    for(int i = start+1; i<=end; i++){
        if(arr[i] < pivot ){
            count++;
        }
    }

    int pivotIndex = start + count;

    // swap to its right place 
    swap(arr[pivotIndex], arr[start]);

    int i=start;
    int j=end;
    // swap elements 
    while(i < pivotIndex && j > pivotIndex){

        while(arr[i] < pivot){
            i++;
        }

        while(arr[j] > pivot){
            j--;
        }

        
        if(i < pivotIndex && j > pivotIndex){

            swap(arr[i], arr[j]);

            i++;
            j--;
        
        }
        
        
    }

   
    return pivotIndex;


}



void quickSort(int *arr, int start, int end){

    

    // base condition
    if(start>=end){
        return ;
    }

  

    int pivot = partition(arr, start, end);
    

    quickSort(arr, start, pivot-1);
    quickSort(arr, pivot+1, end);


}


int main(){

    int arr[] = {3, 1, 4, 5, 2};
    int size = sizeof(arr)/sizeof(arr[0]);

    quickSort(arr, 0, size-1);

    for(int i = 0;i<size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}