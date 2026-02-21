#include<bits/stdc++.h>
using namespace std;

void equelSring(string s1 , string s2 , int index , int len){
    if(index == len){
        cout<<"Strings are equel";
        return;
    }
    if(s1[index] != s2[index]){
        cout<<"Strings are not equel";
        return;
    }
    equelSring(s1,s2,index+1,len);
}

int main(){
    string s1;
    string s2;
    cout<<"Enter first string: ";
    getline(cin,s1);
    cout<<"Enter second string: ";
    getline(cin,s2);
    int len1 = s1.length();
    int len2 = s2.length();
    if(len1 != len2){
        cout<<"Strings are not equel";
        return 0;
    }
    equelSring(s1,s2,0,len1);
}