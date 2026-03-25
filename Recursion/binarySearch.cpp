#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int target, int beg, int end){

    if (beg <= end)
    {
        int mid = beg + (end - beg) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            return binarySearch(arr, target, mid + 1, end);
        }
        else
        {
            return binarySearch(arr, target, beg, mid - 1);
        }
    }
    return -1;
}

int main(){
    int len;
    cout << "Enter size of array : ";
    cin >> len;

    vector<int> arr(len);

    cout << "Enter values : "; 
    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }

    int target;
    cout << "Enter element to search : ";
    cin >> target;
    
    int index = binarySearch(arr, target, 0, len - 1);

    if (index != -1)
    {
        cout << "Your target is at index : " << index;
    }
    else
    {
        cout << "Element not found";
    }
}