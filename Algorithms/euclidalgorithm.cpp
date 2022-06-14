// Euclid's algorithm used to find GCD of two numbers

#include<iostream>
using namespace std;

int gcd(int a, int b){

    if(a == 0)
        return b;
    
    if(b == 0)
        return a;

    while(a != b){

        if(a>b){
            a = a - b;
        }
        else{
            b = b - a;
        }

    }

    return a; 

}


int lcm(int a, int b){

    if(a == 0)
        return b;
    
    if(b == 0)
        return a;

    while(a != b){

        if(a<b){
            a = a + b;
        }
        else{
            b = b + a;
        }

    }

    return a; 

}


int main(){

    int a,b;
    cout<<"Enter Two Numbers : ";
    cin>>a>>b;
    
    cout<<"GCD of two number is : "<<gcd(a,b);

    return 0;


}
