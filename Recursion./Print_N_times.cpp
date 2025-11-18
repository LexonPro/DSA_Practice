#include<iostream>
using namespace std;
void Print_n(char str[],int n){
      int i;
      if (n<1)
      {
        return;
      }

        Print_n(str,n-1);
        cout<<str<<endl;
}
int main(){
    int n;
    char str[20];
    cout<<"Enter character or string to print n times:"<<endl;
    cin.getline(str,20);
    cout<<"Enter no. of times to print:";
    cin>>n;
    Print_n(str,n);
    return 0;
}
