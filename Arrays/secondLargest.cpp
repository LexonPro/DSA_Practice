#include<bits/stdc++.h>
using namespace std;

int secondLargestElement(vector<int> &arr){
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > largest)
        {   
            secondLargest = largest;
            largest = arr[i];  
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

int main(){
    int num;
    cout<<"Enter number of element in Array : ";
    cin>>num;
    cout<<"Enter elements : ";
    vector<int> arr(num);
    for (int i = 0; i < num; i++)
    {
        cin>>arr[i];
    }
    cout<<"Second Largest element is : "<<secondLargestElement(arr);
}