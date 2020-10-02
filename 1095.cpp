// https://cses.fi/problemset/task/1095

#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

ll mod = (ll) 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin >> n;
    while(n--){
        ll a, b;
        cin >> a >> b;
        ll ans = 1;
        while(b) {
            if(b%2 == 1){
                ans *= a;
                ans %= mod;
            }
            a *= a;
            a %= mod;
            b /= 2;
        }
        cout << ans << "\n";
    }
    return 0;
}
