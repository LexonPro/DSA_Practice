#include <bits/stdc++.h>
using namespace std;

int moveZeros(vector<int> &arr, int n, int index) {
  
    if (n == 0)
        return index;

    index = moveZeros(arr, n - 1, index);

    if (arr[n - 1] != 0) {
        swap(arr[index], arr[n - 1]);
        index++;
    }

    return index;
}

int main() {
    int num;
    cout << "Enter number of elements: ";
    cin >> num;

    vector<int> arr(num);

    cout << "Enter elements: ";
    for (int i = 0; i < num; i++)
        cin >> arr[i];

    int nonZeroCount = moveZeros(arr, num, 0);

    for (int i = nonZeroCount; i < num; i++)
        arr[i] = 0;

    cout << "Array after moving zeros to end: ";
    for (int x : arr) cout << x << " ";
}
