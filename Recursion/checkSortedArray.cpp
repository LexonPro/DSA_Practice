#include<bits/stdc++.h>
using namespace std;
bool isSorted(int arr[], int n,int i){
    if( i == n-1 )
        return true;
    if(arr[i] > arr[i+1])
        return false;
        
        return isSorted(arr,n,i+1);
    
    
}

int main(){
    int arr[100];
    int n;
    cout<<"Enter number of element in array : ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter element : ";
        cin>>arr[i];
    }
   
    if(isSorted(arr,n,0)){
        cout<<"Sorted array";
    }
    else{
        cout<<"Unsorted";
    }
    
}