#include<iostream>
using namespace std;

void saydigit(int n, string arr[]){

    if(n==0){
        return ;
    }

    int digit = n % 10;

    saydigit(n/10, arr);
    
    cout<<arr[digit]<<" ";

}


int main(){

    string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", 
                        "Six", "Seven", "Eight", "Nine"}; 

    int n;
    cout<<"Enter the number : ";
    cin>>n;

    saydigit(n, arr);

    return 0;

}