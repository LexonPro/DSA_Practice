#include<bits/stdc++.h>
using namespace std;

void frequencyChar(char arr[]){
    int hashArr[256] = {0};
    for (int i = 0; i < arr.length(); i++)
    {
        hashArr[arr[i]]++;
    }
    // Print result
    cout << "Frequencies:\n";
    for (int i = 0; i <= 256; i++) {
        if (hashArr[i] > 0) {
            cout << i << " = " << hashArr[i] << " times\n";
        }
    }
    
}

int main(){
    int num;
    cout<<"Enter number of element in array : ";
    cin>>num;
    char arr[num];
    cout<<"Enter elements : ";
    for (int i = 0; i < num; i++)
    {
        cin>>arr[i];
        cout<<" ";
    }
    frequencyChar(arr);
    
}