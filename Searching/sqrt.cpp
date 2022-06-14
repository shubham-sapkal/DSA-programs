#include<iostream>
using namespace std;

int sqrtInteger(int num){

    int start = 0;
    int end = num;

    long long int mid = start + (end-start)/2;

    long long int ans = -1;

    while(start<=end){
        long long square = mid*mid;

        if(square == num){
            return mid;
        }

        if(square < num){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }

        mid = start + (end-start)/2;
    }

    return ans;

}

double morePrecision(int n, int precisionCount, int integerPart){

    double factor = 1;
    double ans = integerPart;

    for(int i = 0; i<precisionCount; i++){
        factor = factor/10;

        //cout<<"factor = "<<factor<<endl;

        for(double j = ans; j*j < n; j = j + factor){
            //cout<<"ans = "<< j;
            ans = j;
        }

    }

    return ans;

}


int main(){

    int num;
    
    cout<<"Enter the Number : ";
    cin>>num;

    cout<<" sqrt("<<num<<") = "<< morePrecision(num, 3, sqrtInteger(num) );


    return 0;

}