// https://cses.fi/problemset/task/1619

#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    set<array<int, 2>> s;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        s.insert({a, 1});
        s.insert({b, -1});
    }
    int c = 0, ans = 0;
    for(auto a : s){
        c += a[1];
        ans = max(ans, c);
    }
    cout << ans << "\n";
        
    return 0;
}
