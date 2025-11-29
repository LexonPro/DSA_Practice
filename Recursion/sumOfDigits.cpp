#include<iostream>
using namespace std;

int sumOfDigits(int num){
    if (num<1)                    // Base case
    {
        return 0;
    }
    return num%10 + sumOfDigits(num/10);    // Recursive case
    
}

int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    cout<<"Sum of digits is : "<<sumOfDigits(num);
}