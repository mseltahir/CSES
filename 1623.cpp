// https://cses.fi/problemset/task/1623

#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int n;
ll arr[100];

ll solve(int i, ll so, ll st){
    if (i == n){
        return abs(so-st);
    }
    i++;
    return min(solve(i, so+arr[i], st), solve(i, so, st+arr[i]));
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i];
    cout << solve(-1, 0ll, 0ll) << "\n";
    return 0;
}
