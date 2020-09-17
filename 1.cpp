// https://cses.fi/problemset/task/1068

#include<bits/stdc++.h>

using namespace std;
typedef long long LL;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); 
    LL n;
    cin >> n;
    while(n > 1){
        cout << n << " ";
        if(n % 2 == 0) n /= 2;
        else n = n*3 + 1;
    }
    cout << 1;
    return 0;
}
