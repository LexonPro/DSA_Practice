#include <iostream>
using namespace std;
int main(){
int i,j,n;
cout<<"enter the height"<<endl;
cin>>n;
char count='A';
for ( i = 1; i <=n; i++)
{
    for ( j = 0; j < i; j++)
    {
        cout<<count<<" ";
        
    }
    count++;
    cout<<"\n";
    
}
}