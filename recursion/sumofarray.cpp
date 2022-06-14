#include<iostream>
using namespace std;

int sumOfArray(int arr[], int size){

    //cout<<"size = "<<size<<endl;

    if(size == 0){
        return 0;
    }
    else if(size == 1){
        return arr[0];
    }

    // int sum = sum + sumOfArray(arr+1, size-1);

    return arr[0] + sumOfArray(arr+1, size-1) ;

}


int main(){

    int arr[] = {3, 2, 5, 1, 6};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<"Sum of arr = "<< sumOfArray(arr, size);


}