#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[],int len){
    
    for (int i = 0; i <= len-1; i++)
    {    int j = i;
        while(j>0 && arr[j] < arr[j-1])
        {
            swap(arr[j],arr[j-1]);
            j--; 
        }
        
    }
    
    cout<<"Shorted Array : ";
    for(int i = 0; i < len;i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main(){
    int n;
    cout<<"Enter no. of elements in array : ";
    cin>>n;
    int arr[n] = {0};
    cout<<"Enter elements : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    insertionSort(arr,n);
}