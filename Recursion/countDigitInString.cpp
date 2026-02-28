#include<bits/stdc++.h>
using namespace std;
int countDigit(string s,int i){
    int count = 0;
    if (s.length() == i)
    {
        return count;
    }
    if (s[i] == '0' || s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '6' || s[i] == '7' || s[i] == '8' || s[i] == '9' )
    {
        return 1 + countDigit(s,i+1);
    }
     return countDigit(s,i+1);
}

int main(){
    string s;
    cout<<"Enter string to count digit : ";
    getline(cin,s);
    cout<<"Number of digits are : "<<countDigit(s,0);
}