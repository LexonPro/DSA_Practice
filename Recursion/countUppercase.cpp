#include<bits/stdc++.h>

using namespace std;

int countUppercase(string s , int index ){
    int count = 0;
    if(index == s.length()){
        return count;
    }
    if(s[index] >= 'A' && s[index] <= 'Z'){
        return 1 + countUppercase(s,index + 1);
    }
    return countUppercase(s,index+1);
}

int main(){
    string s;
    cout<<"Enter string to count uppercase : ";
    getline(cin,s);
    cout<<"Number of uppercase letters are : "<<countUppercase(s,0);
}