#include<bits/stdc++.h>
using namespace std;

void wild(string str , int index){

    if (str[index] == '\0')
    {
        cout << str << endl;
        return;
    }

    if (str[index] == '?')
    {
        for (int i = 0; i < 2; i++)
        {
            str[index] = i + '0';
            
            wild(str,index+1);

            str[index] = '0';
        }
        return;
    }
    
    wild(str,index+1);
    
}

int main()
{
    string s = "0?1?110?";

    wild(s, 0);

    return 0;
}