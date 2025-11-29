#include <iostream>
using namespace std;
int main(){
int i,j,k,l,n;
cout<<"enter the height"<<endl;
cin>>n;
int space= 2*n-2;
for ( i = 1; i <=n; i++)
{
    for ( j = 1; j <= i; j++)
    {
        cout<<j;
    }
    
    for ( k =1; k<= space; k++)
    {
        cout<<" ";
    }
   
    for ( l = i; l>=1; l--)
    {
        cout<<l;
    }
    cout<<"\n";
    space-=2;
}
}