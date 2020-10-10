// https://cses.fi/problemset/task/1643

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    long long arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    long long ans = (long long) -1e9, sum = 0;
    for(int i = 0; i < n; i++){
        sum = max(arr[i], sum+arr[i]);
        ans = max(ans, sum);
    }
    cout << ans << "\n";
    return 0;
}
