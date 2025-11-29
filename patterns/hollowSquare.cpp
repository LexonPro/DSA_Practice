#include <iostream>
using namespace std;
int main(){
int i,j,n;
cout<<"enter the height"<<endl;
cin>>n;
for ( i = 1; i <=n; i++)
{
    for ( j = 1; j <=n; j++){
        if (i==1||j==1||i==n||j==n) {
        cout<<"*";
    }
    else
    {
        cout<<" ";
    }
    
    
}cout<<"\n";
}
}