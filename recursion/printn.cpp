#include<iostream>
using namespace std;

// tail recursion
void printn1(int n){

    if(n==0)
        return;

    cout<<n<<" ";

    printn1(n-1);

}

// head recursion
void printn2(int n){

    if(n==0)
        return;

    printn2(n-1);


    cout<<n<<" ";

}


int main(){

    int n;
    cout<<"Enter n : ";
    cin>>n;

    cout<<"Tail recursion .... "<<endl;
    printn1(n);

    cout<<"\nhead recursion .... "<<endl;
    printn2(n);

}