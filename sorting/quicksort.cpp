#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int start, int end){

    int pivot = arr[end];
    int i = (start - 1);

    for(int j = start; j<=end; j++){

        if(arr[j] < pivot ){

            i++;
            swap(arr[i], arr[j]);

        }

    }
    swap(arr[i+1],arr[end]);
    return (i+1);

}


void quickSort(vector<int> &arr, int start, int end){

    if(start<end){
        int pivot = partition(arr, start, end);

        quickSort(arr, start, pivot-1);
        quickSort(arr, pivot+1, end);
    }

}


int main(){

    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    vector<int> arr;
    int temp;
    cout<<"Enter the array Elements: ";
    for(int i = 0; i<n; i++){
        cin>>temp;
        arr.push_back(temp);
    }

    quickSort(arr, 0, arr.size());

    cout<<"\nArray in sorted order using quick sort: "<<endl;
    for (int i = 0; i < arr.size()-1; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;


}