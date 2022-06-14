#include<iostream>
using namespace std;

void reverse(string &s, int i, int n){

    if(i > n-i-1 ){
        return ;
    }

    swap(s[i], s[n-i-1]);
    i++;

    reverse(s, i, n);

}


int main(){
    string s = "abcde";

    reverse(s, 0, s.length()-1);

    cout<<"Reversed string is : "<<s;
}