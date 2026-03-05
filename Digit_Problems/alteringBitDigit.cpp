#include<bits/stdc++.h>
using namespace std;

int minOperations(string s) {
        int flip1 = 0;
        int flip2 = 0;

        for(int i = 0; i < s.size(); i++) {

            if(i % 2 == 0) {
                if(s[i] != '0') flip1++;
            } else {
                if(s[i] != '1') flip1++;
            }

            if(i % 2 == 0) {
                if(s[i] != '1') flip2++;
            } else {
                if(s[i] != '0') flip2++;
            }
        }

        return min(flip1, flip2);
    }