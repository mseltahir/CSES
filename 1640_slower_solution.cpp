// https://cses.fi/problemset/task/1640

#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, x;
    cin >> n >> x;
    set<array<int, 2>> s;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        s.insert({a, i+1});
    }
    for(auto ar : s){
        auto it = s.lower_bound({x - ar[0], 0});
        if(it == s.end()) continue;
        else {
            if((*it)[0] + ar[0] == x && ar[1] != (*it)[1]){
                cout << min(ar[1], (*it)[1]) << " " << max(ar[1], (*it)[1]) << "\n";
                return 0;
            }
            else continue;
        }
    }
    cout << "IMPOSSIBLE\n"; 
    
    return 0;
