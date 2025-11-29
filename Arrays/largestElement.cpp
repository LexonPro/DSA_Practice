#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> &arr){
    int largest = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        
    }
    return largest;
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
    cout<<"Largest element is : "<<largestElement(arr);
}