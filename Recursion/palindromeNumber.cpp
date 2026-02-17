
#include <iostream>
using namespace std;

int reverse(int num ,int rev){
    if(num==0){
        return rev;
    }
    return reverse(num/10 ,rev*10 + num%10);
}

bool palindrome(int num){
    if(num == reverse(num,0)){
        return true;
    }
    else{
        return false;
    }    
    
}

int main(){
    int num;
    cout<<"enter number for palindrome";
    cin>>num;
    if(palindrome(num)){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }
}