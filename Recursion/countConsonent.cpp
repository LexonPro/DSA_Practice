#include<bits/stdc++.h>
using namespace std;
int countConsonent(string s,int index,int count){
    if(index == s.length()){
        return count;
    }
    char ch = s[index];
    if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' && ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U' && ch != ' '){
        count++;
    }
    return countConsonent(s,index+1,count);
}

int main(){
    string s1;
    cout<<"Enter string ";
    getline(cin,s1);
    cout<<"Consonents are : "<<countConsonent(s1,0,0);

}