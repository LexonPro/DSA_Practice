#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[],int len){
        
    for (int i = 0; i < len-2; i++)
    {  
        int minIndex = i;
        for (int j = i; j < len-1; j++)
        {
            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
    cout<<"Shorted Array : ";
    for (int i = 0; i < len; i++)
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
    selectionSort(arr,n);
}