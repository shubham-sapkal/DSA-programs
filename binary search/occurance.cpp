#include<iostream>
using namespace std;

int firstoccurance(int arr[], int size, int target){

    int start = 0;
    int end = size;

    int mid = start + (end - start)/2;

    int ans = -1;

    while(start<=end){

        if(arr[mid] == target){
            ans = mid;
            end = mid - 1;
        }

        if(arr[mid] > target){
            end = mid - 1;
        }
        else if(arr[mid] < target ){
            start = mid + 1;
        }

        mid = start+(end-start)/2;

    }

    return ans;

}

int lastoccurance(int arr[], int size, int target){

    int start = 0;
    int end = size;

    int mid = start + (end - start)/2;

    int ans = -1;

    while(start<=end){

        if(arr[mid] == target ){
            ans = mid;
            start = mid + 1;
        }

        if(arr[mid] > target ){
            end = mid - 1;
        }
        else if(arr[mid] < target){
            start = mid + 1;
        }

        mid = start + (end - start)/2;

    }

    return ans;

}




int main(){

    int arr[] = {1, 2, 3, 3, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);

    int target = 3;

    cout<<"\nFirst occurance of "<<target<<" :  "<< firstoccurance(arr, size, target);
    cout<<"\nlast occurance of "<<target<<" : "<< lastoccurance(arr, size, target);

    return 0;

}