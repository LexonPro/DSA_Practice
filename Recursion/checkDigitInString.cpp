#include<bits/stdc++.h>
using namespace std;
bool checkDigit(string s,int index){
    if(index == s.length()){
        return false;
    }
    if(s[index] >= '0' && s[index] <= '9'){
        return true;
    }
    return checkDigit(s,index + 1);
}

int main(){
    string s1;
    cout<<"Enter string :";
    getline(cin,s1);
    if(checkDigit(s1,0)){
        cout<<"Digit present";
    }
    else{
        cout<<"No digit exist";
    }
}