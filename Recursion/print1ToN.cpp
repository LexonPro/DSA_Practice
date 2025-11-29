#include<iostream>
using namespace std;
void upto_n(int num){
      if (1>num)
      {
        return;
      }

        upto_n(num-1);
        cout<<num<<endl;
}
int main(){
    int num;
    cout<<"Enter no. of terms to print:";
    cin>>num;
    upto_n(num);
    return 0;
}
