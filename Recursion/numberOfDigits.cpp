#include<iostream>
using namespace std;

int numberOfDigits(int num){
    if (num<1)                    // Base case
    {
        return 0;
    }
    return 1 + numberOfDigits(num/10);    // Recursive case
    
}

int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    cout<<"Number of digits is : "<<numberOfDigits(num);
}