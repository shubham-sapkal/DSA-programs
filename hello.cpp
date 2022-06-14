#include<iostream>
using namespace std;

void merge(int* arr, int start, int end){

    int mid = start+(end-start)/2;

    int len1 = mid - start + 1;
    int len2 = end - start;

    int* first = new int[len1];
    int* second = new int[len2];

    int mainArrayIndex = start;
    for(int i=0; i<len1; i++){
        first[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }

    mainArrayIndex = mid+1;
    for(int i=0; i<len2; i++){
        second[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }

    int index1 = 0, index2 = 0;
    mainArrayIndex = start;

    while(index1 < len1 && index2 < len2){

        if(first[index1] < second[index2]){

            arr[mainArrayIndex] = first[index1];
            index1++;
            mainArrayIndex++;

        }
        else{

            arr[mainArrayIndex] = second[index2];
            index2++;
            mainArrayIndex++;

        }

    }

    while(index1 < len1){
        arr[mainArrayIndex] = first[index1];
        index1++;
        mainArrayIndex++;
    }

    while(index2 < len2){
        arr[mainArrayIndex] = second[index2];
        index2++;
        mainArrayIndex++;
    }

    delete[] first;
    delete[] second;    


}


void mergeSort(int* arr, int start, int end){

    if(start >= end){
        return ;
    }

    int mid = start+(end-start)/2;

    mergeSort(arr, start, mid);
    mergeSort(arr, mid+1, end);

    merge(arr, start, end);

}

int main(){

    int arr[] = {45, 11, 23, 67, 99};
    int n = sizeof(arr)/sizeof(arr[0]);

    // cout<<"Size of array : "<< n ;

    mergeSort(arr, 0, n-1);

    for(int i: arr){
        cout<<i<<" ";
    }

    return 0;

}