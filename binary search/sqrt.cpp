#include<iostream>
using namespace std;

int integerpart(int n){

    int start = 0;
    int end = n;

    int mid = start + (end-start)/2;

    long long int ans = -1;

    while(start<=end){

        long long int square = mid*mid;

        if(square == n){
            return mid;
        } 

        if(n > square){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

        mid = start + (end-start)/2;

    }

    return ans;

}


double sqrt(int n, int precision)
{
    double ans =  integerpart(n);
    double factor = 1;

    for(int i = 0; i<precision; i++){

        factor = factor / 10;

        for(double j = ans; j*j < n; j = j + factor){
            //cout<<"\nj = "<<j<<endl;
            ans = j;
        }

    }

    return ans;

}



int main(){

    int n;
    cout<<"Enter the number : ";
    cin>>n;

    cout<<"sqrt with precison is : "<< sqrt(n, 2);

}