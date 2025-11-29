#include<iostream>
using namespace std;
int main(){
    int i,j,k,n;
    cout<<"enter height of pattern"<<"\n";
    cin>>n;
     for ( j = 0; j <n; j++)
        {
             for ( i = 0; i<j; i++){
       cout<<" ";
    }
            for ( k = 0; k <2*n-(2*i+1); k++)
            {
               cout<<"*";
            }
            cout<<"\n";
        }
    
}
