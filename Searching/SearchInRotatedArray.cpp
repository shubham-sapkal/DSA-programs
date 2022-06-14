#include<iostream>
using namespace std;

int pivotElement(int arr[],int n){

    int start = 0;
    int end = n-1;
    int mid = start + (end - start)/2;

    while(start<end){

        if(arr[mid] >= arr[0]){
            start = mid+1;
        }
        else{
            end = mid;
        }

        mid = start+(end-start)/2;

    }

    return start;

}

int binarySearch(int arr[], int s, int e, int key){

    int start = s;
    int end = e;

    int mid = start +(end-start)/2;

    while(start<=end){
        if(arr[mid] == key ){
            return mid;
        }

        // Right Vala Part , key is greater than mid
        if(arr[mid] < key){
            start = mid + 1;
        }

        // Left vala part , key is small then mid
        if(arr[mid] > key ){
            end = mid - 1;
        }

        // mid = (start + end)/2;
        mid = start + (end-start)/2;
    }

    return -1;

}

int binarySearchInRotatedArray(int arr[], int n, int key){

    int pivot = pivotElement(arr, n);

    cout<<"Pivot = "<<pivot;

    if(arr[pivot] <= key && key<=arr[n-1]){
        return binarySearch(arr, pivot, n-1, key);
    }
    else{
        return binarySearch(arr, 0, pivot-1, key);
    }

    return -1;

}



int main(){

    int arr[4] = {2, 3, 5, 8};

    cout<<"\nPosition of 3 in arr = "<<binarySearchInRotatedArray(arr, 4, 3);

}
