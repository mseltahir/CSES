// https://cses.fi/problemset/task/1084

#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m, k;
    cin >> n >> m >> k;
    int ans = 0, arr[n], prices[m];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < m; i++){
        cin >> prices[i];
    }
    sort(arr, arr+n);
    sort(prices, prices+m);
    vector<bool> sold(n, false);
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(abs(prices[i] - arr[j]) <= k && !sold[j]){
                ans++;
                sold[j] = true;
                break;
            }
        }
    }
    cout << ans << "\n";
    return 0;
}
