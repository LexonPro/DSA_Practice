#include<bits/stdc++.h>
using namespace std;

bool isSubset(vector<int> arr,int index,int target){
        if(target == 0){
            return true;
        }

        if (index == arr.size())
        {
            return false;
        }
        

        bool include = isSubset(arr,index+1,target);

        bool exclude = isSubset(arr,index+1,target - arr[index]);

        return include || exclude;
}

int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int target;
    cout << "Enter target sum: ";
    cin >> target;
    
    cout << "Result: " << (isSubset(arr, 0, target) ? "Yes" : "No") << endl;
    
    return 0;
}
