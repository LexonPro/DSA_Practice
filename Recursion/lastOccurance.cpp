#include<bits/stdc++.h>
using namespace std;
int lastOccurance(int arr[], int n ,int key){
    if( n==0 )
        return 0;
    if(arr[n-1] == key){
        return n;
    }    
        return lastOccurance(arr,n-1,key);
    
    
}

int main(){
    int size;
    cout<<"enter size of array";
    cin>>size;
    int arr[size];
    cout<<"enter elements of array";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter key to find last occurance";
    cin>>key;
    cout<<lastOccurance(arr,size,key);
}