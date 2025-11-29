#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[],int len){
    
    for (int i = 0; i < len - 1; i++)
    {   bool isSwap = 0;
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j+1] < arr[j]){ 
               swap(arr[j],arr[j+1]);
               isSwap = 1;
            }   
        }
        if (isSwap = 0)
        {
            break;
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
    bubbleSort(arr,n);
}