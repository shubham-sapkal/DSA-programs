#include<iostream>
using namespace std;

long long int power(int n){
    if(n==0){
        return 2;
    }
        
    return 2*power(n-1);
} 
    
    
bool isValid(int mid, int n){
        
    if(power(mid) == n ){
        return true;
    }
        
    return false;
        
}
    
    
bool isPowerOfTwo(int n) {
        
    int start = 0;
    int end = n;
        
    int mid = start+(end-start)/2;
        
    while(start<=end){

        // cout<<""
            
        if(isValid(mid, n)){
            return true;
        }

        if(power(mid) >= n){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
            
        mid = start+(end-start)/2;
            
    }
        
    return false;
        
        
}

int main(){

    int n;

    cout<<"Enter the n : ";
    cin>>n;

    cout<<"n is valid or not : "<<isPowerOfTwo(n);

    return 0;

}