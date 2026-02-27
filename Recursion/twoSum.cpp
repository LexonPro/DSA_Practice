#include<bits/stdc++.h>
using namespace std;

bool twoSum(int arr[], int n, int index, int sum, int target) {
    if (index == n) {
        return sum == target;
    }

    // include element
    if (twoSum(arr, n, index + 1, sum + arr[index], target))
        return true;

    // exclude element
    if (twoSum(arr, n, index + 1, sum, target))
        return true;

    return false;
}

int main() {
    int arr[100];
    int n;

    cout << "Enter number of element in array : ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter element : ";
        cin >> arr[i];
    }

    int t;
    cout << "Enter target value : ";
    cin >> t;

    if (twoSum(arr, n, 0, 0, t))
        cout << "Subset found";
    else
        cout << "Subset not found";
}