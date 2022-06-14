#include<iostream>
using namespace std;

int findexpo(int a, int n){

    int result = 1;

    while(n>0){

        // n is odd,
        if(n&1){
            result = result * a;
        }

        a = a*a;
        // Divide my 2
        // right shifting is best for divide by 2 
        n = n>>1;

    }

    return result;

}

int main(){

    int a,n;
    cout<<"Enter Value of a and n : ";
    cin>>a>>n;

    cout<<"Exponential value of a^n : "<<findexpo(a,n);

    return 0;

}