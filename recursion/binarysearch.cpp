#include<iostream>
using namespace std;

int binarysearch(int arr[], int start, int end, int key)
{

    if(start>end){
        return -1;
    }

    int mid = start+(end-start)/2;

    if(arr[mid] == key ){
        return mid;
    }
    else if(arr[mid] < key ){
        return binarysearch(arr, mid+1, end, key);
    }
    else{
        return binarysearch(arr, start, mid-1, key);
    }

}

int main(){

    int arr[] = {3, 6, 10, 76, 90};
    int size = sizeof(arr)/sizeof(arr[0]);

    int key = 76;
    cout<<"Key is found at : "<<binarysearch(arr, 0, size, key);

    return 0;

}