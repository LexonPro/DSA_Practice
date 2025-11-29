#include<bits/stdc++.h>
using namespace std;

void countNum(int num, int arr[]){
    int hashArr[100000] = {0};
    for (int i = 0; i < num; i++)
    {
        hashArr[arr[i]]++;
    }
    // Print result
    cout << "Frequencies:\n";
    for (int i = 0; i < 100000; i++) {
        if (hashArr[i] > 0) {
            cout << i << " = " << hashArr[i] << " times\n";
        }
    }
}
int main(){
    int num;
    cout<<"Enter number of element in array : ";
    cin>>num;
    int arr[num];
    cout<<"Enter elements : ";
    for (int i = 0; i < num; i++)
    {
        cin>>arr[i];
        cout<<" ";
    }
    countNum(num,arr);
    
}