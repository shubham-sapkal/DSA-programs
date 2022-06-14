#include<iostream>
using namespace std;

long long int powerofa(int a, int n){

    // base case 
    if(n == 0){
        return 1;
    } else if( n == 1){
        return a;
    }

    if(n%2 == 0){
        return powerofa(a, n/2) * powerofa(a, n/2);
    }
    else{
        return a * powerofa(a, n/2) * powerofa(a, n/2);
    }





}


int main(){

    int a, n;

    cout<<"Enter the values of a and n : ";
    cin>>a>>n;

    cout<<"The Power of "<< a <<" raise to "<< n << " : "<< powerofa(a,n);

}