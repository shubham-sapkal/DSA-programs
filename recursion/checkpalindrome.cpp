#include<iostream>
using namespace std;

bool checkpalindrome(string s, int i, int j){

    if(i>j){
        return true;
    }

    if(s[i] == s[j]){
        i++;
        j--;
        return checkpalindrome(s, i, j);
    }
    else{
        return false;
    }

}


int main(){

    string s = "abcbta";

    cout<<"is string is palindrome ?  "<< checkpalindrome(s, 0, s.length()-1);

}