// https://cses.fi/problemset/task/1072

#include<bits/stdc++.h>

using namespace std;
typedef long long LL;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n;
    cin >> n;
    for(LL i = 1; i <= n; i++) cout << (i - 1)*(i + 4)*(i*i - 3*i + 4)/2 << "\n";
    return 0;
}
