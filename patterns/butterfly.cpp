#include <iostream>
using namespace std;
int main(){
    int n,i,j,k,l;
    int space;
    int stars;
    cout<<"enter height of pattern";
    cin>>n;
   
    for (int i = 1; i <=2*n-1; i++){
         
     if (i<=n){
            space=2*n-2*i;
            stars=i;
    }
     else{
        space+=2;
        stars=2*n-i;
      }
        for (int j = 1; j < stars; j++)
        {
            cout<<"*";
        }
        for (int k = 0; k < space; k++)
        {
            cout<<" ";
        }
        for (int l = 1; l < stars; l++)
        {
            cout<<"*";
        }
        cout<<"\n";
        
    }
    
}