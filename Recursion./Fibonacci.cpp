#include<iostream>
using namespace std;
int fibo(int term){
    if(term == 1)
        return 0;
    else if(term == 2)
        return 1;
    else{
        return fibo(term-1)+fibo(term-2);
    }
}
int main(){
    int term;
    cout<<"Enter term to get its value:";
    cin>>term;
    cout<<"Value of terms is :"<<fibo(term);
}
