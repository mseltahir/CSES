// https://cses.fi/problemset/task/1754

#include<bits/stdc++.h>

using namespace std;
typedef long long LL;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while(tt--){
        int a, b;
        cin >> a >> b;
        if((a+b) % 3 == 0 && min(a, b) >= max(a, b)/2) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
