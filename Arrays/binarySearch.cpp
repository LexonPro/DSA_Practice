#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr,int key){
    int beg = 0;
    int end = arr.size() - 1;
    while (beg <= end)
    {
        int mid = beg + (end - beg)/2;
        if (key == arr[mid])
        {
            return mid + 1;
        }
        else if(key < arr[mid]){
            end = mid - 1;
        }
        else if(key > arr[mid]){
            beg = mid + 1;
        }
        
    }
    return -1;
}

int main(){
    int num;
    cout<<"Enter no of elements in array : ";
    cin>>num;
    cout<<"Enter elements :"<<endl;
    vector<int> arr(num);
    for (int i = 0; i < num; i++)
    {
        cin>>arr[i];
    }
    int searchedElement;
    cout<<"Enter element to be searched : ";
    cin>>searchedElement;
    int result = binarySearch(arr,searchedElement);
    if(result != -1){
    cout<<"Element is at position :"<<result;
    }
    else{
        cout<<"Element not found";
    }
}