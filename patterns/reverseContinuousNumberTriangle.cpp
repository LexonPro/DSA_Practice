#include <iostream>
using namespace std;
int main(){
int i,j,n;
cout<<"enter the height"<<endl;
cin>>n;

for ( i = 0; i <=n; i++)
{char count='A';
    for ( j = 0; j <n-i; j++)
    {
        cout<<count<<" ";
        count++;
    }
    cout<<"\n";
    
}
}