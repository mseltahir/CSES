// https://cses.fi/problemset/task/1074

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    long long ans = 0;
    int mid = n/2;
    for(int i = 0; i < n; i++){
        ans += abs(arr[i] - arr[mid]);
    }
    cout << ans << "\n";
    return 0;
}
