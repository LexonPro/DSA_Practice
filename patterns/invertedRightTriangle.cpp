#include <iostream>
using namespace std;
int main(){
int i,j,n;
cout<<"enter the height"<<endl;
cin>>n;
for ( i = 1; i <=n; i++)
{
    for ( j = 1; j <=i; j++)
    {
        cout<<j;
    }
    cout<<"\n";
    
}
}