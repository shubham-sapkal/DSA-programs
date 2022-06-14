#include<iostream>
using namespace std;

int powerof2(int n){

    // base case 
    if(n == 0){
        return 1;
    }

    if(n%2 == 0){
        return (powerof2(n/2) * powerof2(n/2));
    }
    else{
        return 2*(powerof2(n/2) * powerof2(n/2));
    }


}



int main(){

    int n;
    cout<<"Enter the power value : ";
    cin>>n;

    cout<<"The power of 2 raise to "<< n <<" is "<< powerof2(n);

}