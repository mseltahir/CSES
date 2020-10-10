// https://cses.fi/problemset/task/1091

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    set<array<int, 2>> s;
    for(int i= 0; i < n; i++){
        int x;
        cin >> x;
        s.insert({x, i});
    }
    while(m--){
        int cus;
        cin >> cus;
        auto it = s.lower_bound({cus+1, 0});
        if(it == s.begin()) {
            cout << "-1\n";
        }
        else {
            --it;
            cout << (*it)[0] << "\n";
            s.erase(it);
        }
    }
    return 0;
}
