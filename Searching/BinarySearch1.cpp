#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){

    int start = 0;
    int end = size - 1;

    // int mid = (start + end)/2;
    int mid = start + (end-start)/2;   // Optimation for int range exceed error


    while(start <= end){

        if(arr[mid] == key ){
            return mid+1;
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
        mid = start + (end-start)/2;   // Optimation for int range exceed error


    }

    return -1;

}


int main(){

    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,11,14,16};

    cout<<"Index of 12 in even array = "<< binarySearch(even, 6, 12) <<endl;
    cout<<"Index of 18 in even array = "<< binarySearch(even, 6, 18) <<endl;
    cout<<"Index of 20 in even array = "<< binarySearch(even, 6, 20) <<endl;

    cout<<endl;

    cout<<"Index of 8 in odd array = "<< binarySearch(odd, 5, 8) <<endl;
    cout<<"Index of 14 in odd array = "<< binarySearch(odd, 5, 14) <<endl;
    cout<<"Index of 20 in odd array = "<< binarySearch(odd, 5, 20) <<endl;

    return 0;

}