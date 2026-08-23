#include<bits/stdc++.h>
using namespace std;

void permutation(string str,int beg,int end){
    if (beg == end)
    {
        cout << str << endl;    
    }
    
    for (int i = 0; i < end; i++)
    {
        swap(str[beg],str[i]);
        permutation(str,beg+1,end);
        swap(str[beg],str[i]);
    }
    
}
int main(){
    string s;
    cin >> s;
    permutation(s,0,s.size()-1);
}