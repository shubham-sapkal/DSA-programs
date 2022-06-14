#include<iostream>
using namespace std;

void print(int arr[], int size){

    cout<<"\nSize of array = "<<size<<endl;

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

}


bool linearsearch(int arr[], int key, int size){

     print(arr, size);

    if(size == 0)
        return false;


    if(arr[0] == key ){
        return true;
    }
    else{
        return linearsearch(arr+1, key, size-1);
    }

}

// returning index of key
int linearsearch1(int arr[], int key, int size){

    print(arr, size);

    if(size == 0){
        cout<<"element not present .. ";
        return -1;
    }
        


    if(arr[0] == key ){
        cout<<"Elemt found";
        return size;
    }
    else{
        return linearsearch(arr+1, key, size-1);
    }

}

int main(){

    int arr[] = {3, 2, 5, 1, 6};
    int size = sizeof(arr)/sizeof(arr[0]);

    int key = 1;

    cout<<"is key present ? "<< linearsearch1(arr, key, size);

    return 0;

}