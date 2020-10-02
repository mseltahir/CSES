// https://cses.fi/problemset/task/1618

#include<bits/stdc++.h>

using namespace std;
typedef long long LL;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, ans = 0;
    cin >> n;
    for(int i = 5; n/i >= 1; i*=5) ans += n/i;
    cout << ans;
    return 0;
}
