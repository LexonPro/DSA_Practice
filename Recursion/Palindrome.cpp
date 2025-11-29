#include<iostream>
using namespace std;
bool palindrome(int i, string &s){
      int n = s.size();
      if (i >= n/2){               // Base case
          return true;
        } 
        if (s[i]!=s[n-i-1]){      
            return false;
        }
        return palindrome(i+1,s);  // Recursive call
}

int main(){
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    if (palindrome(0,s)==true){
        cout<<"The string is palindrome";
    }
    else{
        cout<<"The string is not palindrome";
    }
}