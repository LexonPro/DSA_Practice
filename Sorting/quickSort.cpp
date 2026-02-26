#include <iostream>
using namespace std;

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

// 🔥 recursive quicksort
void quickSortRecursive(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSortRecursive(arr, low, pi - 1);
        quickSortRecursive(arr, pi + 1, high);
    }
}

// ✅ wrapper function (your original style)
void quickSort(int arr[], int n) {
    quickSortRecursive(arr, 0, n - 1);
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[100];
    int n;

    cout << "Enter number of elements in array: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter element: ";
        cin >> arr[i];
    }

    quickSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);
}