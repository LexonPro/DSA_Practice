#include<bits/stdc++.h>
using namespace std;

void revArray( int arr[], int left , int right){

    if (left >= right)  // Base case
    {
        return;
    }
    swap(arr[left], arr[right]);  // Swapping elements
    revArray(arr, left + 1, right - 1);  // Recursive call
    
}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array : ";
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    revArray(arr, 0, n - 1);  // Function call to reverse the array
    cout<<"Reversed array is : ";
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}