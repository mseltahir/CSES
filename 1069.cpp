// https://cses.fi/problemset/task/1069

#include<bits/stdc++.h>

using namespace std;
typedef long long LL;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); 
    string s;
    cin >> s;
    int mx = 0, rep = 1;
    for (int i = 1; i < s.length(); ++i){
        if(s[i] == s[i-1]){
            rep++;
            mx = rep > mx? rep : mx;
        } else rep = 1;
    }
    mx = mx == 0? 1 : mx;
    cout << mx;
    return 0;
}
