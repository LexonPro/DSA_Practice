#include <iostream>
using namespace std;
int main(){
int i,j,n;
cout<<"enter the height"<<endl;
cin>>n;
int size=2*n-1;
for ( i = 1; i<=size; i++)
{
    for ( j = 1; j <=size; j++){
        int top=i-1;
        int left=j-1;
        int bottom=size-i;
        int right=size-j;
        int min_dist=min(min(top,left),min(right,bottom));
        cout<<n-min_dist<<" ";

    
}cout<<"\n";
}
}