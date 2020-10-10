// https://cses.fi/problemset/task/1629

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<array<int, 2>> v;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }
    sort(v.begin(), v.end(), [&](const array<int, 2>& a, const array<int, 2>& b) -> bool{
        return a[1] == b[1] ? a[0] > b[0] : a[1] < b[1];
    });
    int ans = 1;
    stack<int> s;
    s.push(v[0][1]);
    for(int i = 1; i < n; i++){
        if(v[i][0] >= s.top()){
            ans++;
            s.push(v[i][1]);
        }
    }
    cout << ans << "\n";
    return 0;
}
